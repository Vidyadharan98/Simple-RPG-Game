// © 2025 Vidyadharan Anbuchezhian
// Licensed under the MIT License — see LICENSE and NOTICE files for details.

#pragma once

#include "Audio/BGMPlayer.hpp"
#include "Game.hpp"
#include "Interfaces/InputManager.hpp"
#include "Interfaces/OutputManager.hpp"
#include "Interfaces/PlayerMenu.hpp"
#include "States/ExplorationState.hpp"
#include "States/MainMenuState.hpp"
#include "States/State.hpp"

class PlayState : public State {
 public:
  PlayState();
  ~PlayState() override;

  void init() override {}
  void running() override;
};