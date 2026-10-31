#include "ComboManager.hpp"
#include <algorithm>
#include <iostream>

namespace Glassy {

void ComboManager::update(float dt) {
    if (m_comboTimer > 0.0f) {
        m_comboTimer -= dt;
        if (m_comboTimer <= 0.0f) {
            resetCombo();
        }
    }
}

int ComboManager::registerMerge(GemType mergedType, GemType resultType, bool isUserInteraction) {
    int basePoints = GameConfig::GemScoreValues[(size_t)resultType];

    // 1. Perlas: Iniciador automático continuo (sin combo)
    if (mergedType == GemType::Pearl) {
        return basePoints;
    }

    // 2. Gemas jugables (Esmeralda a Rubí)
    if (m_comboTimer > 0.0f && m_comboMultiplier >= 1 &&
        m_activeComboGemType.has_value() && m_activeComboGemType.value() == mergedType) {

        // Unión consecutiva del mismo elemento
        m_comboMultiplier++;
        m_comboTimer = GameConfig::COMBO_TIME_LIMIT;
        m_currentPitch = std::min(1.0f + (m_comboMultiplier - 1) * 0.12f, 2.2f);

        int totalPoints = basePoints * m_comboMultiplier;
        std::cout << "[Combo] x" << m_comboMultiplier << " (" << (int)mergedType << ") +" << totalPoints << " pts!\n";
        return totalPoints;
    } else {
        // Nuevo elemento o combo previo expirado
        m_activeComboGemType = mergedType;
        m_comboMultiplier = 1;
        m_comboTimer = GameConfig::COMBO_TIME_LIMIT;
        m_currentPitch = 1.0f;

        std::cout << "[Combo] Iniciado x1 (" << (int)mergedType << ") +" << basePoints << " pts\n";
        return basePoints;
    }
}

void ComboManager::resetCombo() {
    m_comboMultiplier = 0;
    m_comboTimer = 0.0f;
    m_currentPitch = 1.0f;
    m_activeComboGemType = std::nullopt;
}

} // namespace Glassy

