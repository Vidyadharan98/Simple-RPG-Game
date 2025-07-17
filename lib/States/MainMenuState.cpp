// © 2025 Vidyadharan Anbuchezhian
// Licensed under the MIT License — see LICENSE and NOTICE files for details.

#include "States/MainMenuState.hpp"

MainMenuState::MainMenuState() {}

void MainMenuState::init() {
  MainMenu::showTitle();
  std::string player_name = Game::getInstance().getPlayer().getName();
  OutputManager::print("Hello " + player_name);
  BGMPlayer::getInstance().init("assets/music/Alone-Time(chosic.com).mp3",
                                true);
  BGMPlayer::getInstance().play();
}

void MainMenuState::running() {
  bool inMenu = true;
  while (inMenu) {
    MainMenu::showMenu();

    int choice = InputManager::getIntInRange("Choose an option: ", 1, 3);

    switch (choice) {
      case 1:
        Game::getInstance().changeState(std::make_unique<PlayState>());
        inMenu = false;
        break;
      case 2:
        MainMenu::showCredits();
        break;
      case 3:
        OutputManager::print("Bye");
        Game::getInstance().changeState(nullptr);
        inMenu = false;
        break;
      default:
        OutputManager::print("Please enter valid choice");
        break;
    }
  }
}

MainMenuState::~MainMenuState() {}