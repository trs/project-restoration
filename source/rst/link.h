#pragma once

#include <optional>

#include "game/items.h"

namespace rst::link {

void Init();

void HandleFastTransform();
void HandleFastOcarina();
void HandleFastArrowSwitch();

std::optional<game::Action> GetFastArrowAction();

}  // namespace rst::link
