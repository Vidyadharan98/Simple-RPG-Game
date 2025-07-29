// © 2025 Vidyadharan Anbuchezhian
// Licensed under the MIT License — see LICENSE and NOTICE files for details.

#pragma once

#include <fstream>
#include <iostream>
#include <string>

class PlayerMenu {
 public:
  PlayerMenu() {};
  ~PlayerMenu() {};

  static void showMenu() {
    std::cout << "\n PLAYER MENU \n";
    std::cout << "1. View Status \n";
    std::cout << "2. Explore \n";
    std::cout << "3. Exit to MainMenu \n";
  }
  
};