#pragma once
#include "GemType.hpp"
#include "GameConfig.hpp"
#include <optional>

namespace Glassy {

class ComboManager {
public:
    ComboManager() = default;

    void update(float dt);
    int registerMerge(GemType mergedType, GemType resultType, bool isUserInteraction);
    void resetCombo();

    int getMultiplier() const { return m_comboMultiplier; }
    float getTimer() const { return m_comboTimer; }
    float getPitch() const { return m_currentPitch; }
    std::optional<GemType> getActiveGemType() const { return m_activeComboGemType; }

private:
    int m_comboMultiplier = 0;
    float m_comboTimer = 0.0f;
    float m_currentPitch = 1.0f;
    std::optional<GemType> m_activeComboGemType = std::nullopt;
};

} // namespace Glassy

