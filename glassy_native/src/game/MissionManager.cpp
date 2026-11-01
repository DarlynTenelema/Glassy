#include "MissionManager.hpp"
#include <algorithm>
#include <iostream>

namespace Glassy {

MissionManager::MissionManager() {
    reset();
}

void MissionManager::reset() {
    m_mission = ActiveMission();
    m_mission.isActive = false;
    m_nextMissionCooldown = 10.0f;
}

std::string MissionManager::getGemName(GemType type, int count) {
    switch (type) {
        case GemType::Pearl:     return count > 1 ? "Perlas" : "Perla";
        case GemType::Emerald:   return count > 1 ? "Esmeraldas" : "Esmeralda";
        case GemType::Amethyst:  return count > 1 ? "Amatistas" : "Amatista";
        case GemType::Topaz:     return count > 1 ? "Topacios" : "Topacio";
        case GemType::GreenRuby: return count > 1 ? "Rubíes Verdes" : "Rubí Verde";
        case GemType::Sapphire:  return count > 1 ? "Zafiros" : "Zafiro";
        case GemType::RedRuby:   return count > 1 ? "Rubíes" : "Rubí";
        case GemType::Diamond:   return count > 1 ? "Diamantes" : "Diamante";
        case GemType::Quartz:    return count > 1 ? "Cuarzos" : "Cuarzo";
        case GemType::Stone:     return count > 1 ? "Piedras" : "Piedra";
        default:                 return "Gemas";
    }
}

std::string MissionManager::getMissionTitle() const {
    if (!m_mission.isActive) return "";

    std::string gemName = getGemName(m_mission.targetGem, m_mission.targetAmount);

    switch (m_mission.action) {
        case MissionAction::Combo:
            return "Logra un combo de " + std::to_string(m_mission.targetAmount) + " con " + gemName;
        case MissionAction::Create:
            if (m_mission.targetAmount == 1) {
                return "Crea 1 " + getGemName(m_mission.targetGem, 1);
            }
            return "Crea " + std::to_string(m_mission.targetAmount) + " " + gemName;
        case MissionAction::Merge:
        default:
            return "Fusiona " + std::to_string(m_mission.targetAmount) + " " + gemName;
    }
}

void MissionManager::update(float dt, bool isPaused) {
    // Si el juego está en pausa, TODO el sistema de misiones se congela limpiamente
    if (isPaused) return;

    if (m_mission.isActive) {
        m_mission.timeRemaining -= dt;
        if (m_mission.timeRemaining <= 0.0f) {
            std::cout << "[Misión C++] Tiempo agotado para: " << getMissionTitle() << "\n";
            m_mission.isActive = false;
            scheduleNextMission(15.0f);
        }
    } else {
        m_nextMissionCooldown -= dt;
        if (m_nextMissionCooldown <= 0.0f) {
            generateProceduralMission(0);
        }
    }
}

void MissionManager::scheduleNextMission(float delaySeconds) {
    m_nextMissionCooldown = delaySeconds;
}

void MissionManager::generateProceduralMission(int currentScore) {
    m_mission.isActive = true;
    m_mission.currentAmount = 0;

    int roll = rand() % 3;
    if (roll == 0) {
        // Misión de FUSIÓN ESTRICTA: "Fusiona X gemas Y"
        m_mission.action = MissionAction::Merge;
        // Gema aleatoria entre Esmeralda (1) y Topacio (3)
        int gIdx = 1 + (rand() % 3);
        m_mission.targetGem = (GemType)gIdx;
        m_mission.targetAmount = 2 + (rand() % 2); // 2 o 3
        m_mission.timeRemaining = 50.0f;
        m_mission.rewardPoints = 200 + gIdx * 50;
    } else if (roll == 1) {
        // Misión de COMBO: "Logra un combo de X con gema Y"
        m_mission.action = MissionAction::Combo;
        int gIdx = 1 + (rand() % 3); // Esmeralda a Topacio
        m_mission.targetGem = (GemType)gIdx;
        m_mission.targetAmount = 2 + (rand() % 2); // combo de 2 o 3
        m_mission.timeRemaining = 60.0f;
        m_mission.rewardPoints = 250 + gIdx * 60;
    } else {
        // Misión de CREACIÓN: "Crea X gemas Y"
        m_mission.action = MissionAction::Create;
        int gIdx = 2 + (rand() % 3); // Amatista a Rubí Verde
        m_mission.targetGem = (GemType)gIdx;
        m_mission.targetAmount = 1;
        m_mission.timeRemaining = 55.0f;
        m_mission.rewardPoints = 300 + gIdx * 50;
    }

    std::cout << "[Misión C++] Nueva misión activada: " << getMissionTitle()
              << " (" << (int)m_mission.timeRemaining << "s) -> +" << m_mission.rewardPoints << " pts\n";
}

void MissionManager::registerMerge(GemType mergedType, GemType resultType, int currentCombo, int& outScore) {
    if (!m_mission.isActive) return;

    bool progressed = false;

    if (m_mission.action == MissionAction::Merge) {
        // Validación ESTRICTA del elemento fusionado (origen: mergedType)
        if (mergedType == m_mission.targetGem) {
            m_mission.currentAmount++;
            progressed = true;
        }
    } else if (m_mission.action == MissionAction::Combo) {
        // Validación ESTRICTA de Combo con elemento específico:
        // Solo progresa si el combo alcanzado corresponde a la gema pedida
        if (mergedType == m_mission.targetGem) {
            m_mission.currentAmount = std::min(currentCombo, m_mission.targetAmount);
            progressed = true;
        }
    } else if (m_mission.action == MissionAction::Create) {
        // Validación ESTRICTA de elemento creado (resultado: resultType)
        if (resultType == m_mission.targetGem) {
            m_mission.currentAmount++;
            progressed = true;
        }
    }

    if (progressed) {
        std::cout << "[Misión C++] Progreso: " << m_mission.currentAmount << " / " << m_mission.targetAmount << "\n";

        if (m_mission.currentAmount >= m_mission.targetAmount) {
            outScore += m_mission.rewardPoints;
            std::cout << "[Misión C++] ¡¡MISIÓN COMPLETADA!! +" << m_mission.rewardPoints << " pts. Score Total: " << outScore << "\n";
            m_mission.isActive = false;
            scheduleNextMission(15.0f);
        }
    }
}

} // namespace Glassy

