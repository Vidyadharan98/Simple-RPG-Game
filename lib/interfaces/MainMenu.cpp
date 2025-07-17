// © 2025 Vidyadharan Anbuchezhian
// Licensed under the MIT License — see LICENSE and NOTICE files for details.

#include "Interfaces/MainMenu.hpp"

void MainMenu::showTitle() {
  OutputManager::printAsciiArt("assets/ASCII_Arts/title.txt");
}

void MainMenu::showMenu() {
  OutputManager::print("\n MAIN MENU \n");
  OutputManager::print("1. Start Game \n");
  OutputManager::print("2. Credits \n");
  OutputManager::print("3. Exit \n");
}

void MainMenu::showCredits() {
  OutputManager::printLines({
    "",
    "CREDITS",
    "Made with C++!",
    "Developer: Vidyadharan Anbuchezhian",
    "Background Music (Main Menu Only):",
    "  ♪ 'Alone Time' by Purrple Cat",
    "     https://purrplecat.com/",
    "     Promoted by https://www.chosic.com/free-music/all/",
    "     Licensed under CC BY-SA 3.0",
    "     https://creativecommons.org/licenses/by-sa/3.0/",
    ""
});
}