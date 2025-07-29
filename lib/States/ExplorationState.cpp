// © 2025 Vidyadharan Anbuchezhian
// Licensed under the MIT License — see LICENSE and NOTICE files for details.

#include "States/ExplorationState.hpp"

ExplorationState::ExplorationState() {}

void ExplorationState::running() {
  bool inMenu = true;
  while (inMenu) {
    Exploration::showDirections();

    int choice = InputManager::getIntInRange("Choose an option: ", 1, 5);

    switch (choice) {
      case 1:
        explore.move(Direction::North);
        break;
      case 2:
        explore.move(Direction::South);
        break;
      case 3:
        explore.move(Direction::West);
        break;
      case 4:
        explore.move(Direction::East);
        break;
      case 5:
        OutputManager::print("Exiting exploration");
        Game::getInstance().changeState(std::make_unique<PlayState>());
        inMenu = false;
        break;
      default:
        OutputManager::print("Please enter valid choice");
        break;
    }
  }
}

ExplorationState::~ExplorationState() {}