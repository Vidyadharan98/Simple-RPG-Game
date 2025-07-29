// © 2025 Vidyadharan Anbuchezhian
// Licensed under the MIT License — see LICENSE and NOTICE files for details.

#pragma once

#include <iostream>
#include <string>

#include "Interfaces/OutputManager.hpp"

class MainMenu {
 public:
  MainMenu() {};
  ~MainMenu() {};

  static void showTitle();
  static void showMenu();
  static void showCredits();
};