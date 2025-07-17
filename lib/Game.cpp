// © 2025 Vidyadharan Anbuchezhian
// Licensed under the MIT License — see LICENSE and NOTICE files for details.

#include "Game.hpp"

#include "Interfaces/InputManager.hpp"

Game& Game::getInstance() {
  static Game instance;
  return instance;
}

Player& Game::getPlayer() { return player; }

Game::Game() {
  std::string player_name;
  OutputManager::print("Enter your name adventurer");
  std::cin >> player_name;
  player.setName(player_name);
  currentState = std::make_unique<MainMenuState>();
}

void Game::run() {
  currentState->init();
  while (running && currentState) {
    currentState->running();
  }
}

void Game::changeState(std::unique_ptr<State> newState) {
  if (newState == nullptr) {
    running = false;  // 🔁 Proper way to stop game
    return;
  }
  currentState = std::move(newState);
  currentState->init();
}

Game::~Game() {
  if (currentState != nullptr) {
    currentState.reset();
  };
}