// © 2025 Vidyadharan Anbuchezhian
// Licensed under the MIT License — see LICENSE and NOTICE files for details.

#pragma once

#include <memory>

#include "Characters/Player.hpp"
#include "States/MainMenuState.hpp"

class Game {
 public:
  static Game& getInstance();
  Game();
  ~Game();

  void run();
  void changeState(std::unique_ptr<State> newState);
  Player& getPlayer();

 private:
  std::unique_ptr<State> currentState;
  Player player;
  bool running{true};
};