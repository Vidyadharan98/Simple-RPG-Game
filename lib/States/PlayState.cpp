// © 2025 Vidyadharan Anbuchezhian
// Licensed under the MIT License — see LICENSE and NOTICE files for details.

#include "States/PlayState.hpp"

PlayState::PlayState() {}

void PlayState::running() {
  bool inMenu = true;
  while (inMenu) {
    PlayerMenu::showMenu();

    int choice = InputManager::getIntInRange("Choose an option: ", 1, 3);

    switch (choice) {
      case 1:
        Game::getInstance().getPlayer().showStatus();
        break;
      case 2:
        Game::getInstance().changeState(std::make_unique<ExplorationState>());
        inMenu = false;
        break;
      case 3:
        OutputManager::print("Going back to Main Menu ");
        Game::getInstance().changeState(std::make_unique<MainMenuState>());
        inMenu = false;
        break;
      default:
        OutputManager::print("Please enter valid choice");
        break;
    }
  }
}

PlayState::~PlayState() {}