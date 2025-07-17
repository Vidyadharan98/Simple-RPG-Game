// © 2025 Vidyadharan Anbuchezhian
// Licensed under the MIT License — see LICENSE and NOTICE files for details.

#pragma once

#include "Audio/BGMPlayer.hpp"
#include "Interfaces/InputManager.hpp"
#include "Interfaces/MainMenu.hpp"
#include "States/State.hpp"
#include "States/PlayState.hpp"
#include "Game.hpp"

class MainMenuState : public State {
 public:
  MainMenuState();
  ~MainMenuState() override;

  void init() override;
  void running() override;
};