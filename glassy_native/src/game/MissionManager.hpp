#pragma once
#include <string>
#include <random>
#include "GemType.hpp"
#include "GameConfig.hpp"

namespace Glassy {

enum class MissionAction {
    Merge, // "Fusiona X gemas Y" (valida origen: mergedType)
    Combo, // "Logra un combo de X con gema Y" (valida combo actual de esa gema)
    Create // "Crea X gemas Y" (valida resultado: resultType)
};

struct ActiveMission {
    MissionAction action = MissionAction::Merge;
    GemType targetGem = GemType::Amethyst;
    int targetAmount = 3;
    int currentAmount = 0;
    float timeRemaining = 50.0f;
    int rewardPoints = 200;
    bool isActive = false;
};

class MissionManager {
public:
    MissionManager();

    void update(float dt, bool isPaused);
    void registerMerge(GemType mergedType, GemType resultType, int currentCombo, int& outScore);
    void reset();

    bool isMissionActive() const { return m_mission.isActive; }
    const ActiveMission& getMission() const { return m_mission; }
    std::string getMissionTitle() const;
    static std::string getGemName(GemType type, int count = 1);

private:
    void scheduleNextMission(float delaySeconds);
    void generateProceduralMission(int currentScore);

    ActiveMission m_mission;
    float m_nextMissionCooldown = 10.0f;
};

} // namespace Glassy

