// © 2025 Vidyadharan Anbuchezhian
// Licensed under the MIT License — see LICENSE and NOTICE files for details.

#pragma once

#include "Audio/BGMPlayer.hpp"
#include "Game.hpp"
#include "Interfaces/InputManager.hpp"
#include "Interfaces/PlayerMenu.hpp"
#include "Mechanics/Exploration.hpp"
#include "States/PlayState.hpp"
#include "States/State.hpp"

class ExplorationState : public State {
 public:
  ExplorationState();
  ~ExplorationState() override;

  void init() override {}
  void running() override;

 private:
  Exploration explore;
};