// © 2025 Vidyadharan Anbuchezhian
// Licensed under the MIT License — see LICENSE and NOTICE files for details.

#pragma once

#include <iostream>

#include "Mechanics/Map.hpp"
#include "Interfaces/OutputManager.hpp"

enum class Direction { North, South, West, East };

class Exploration {
 public:
  Exploration();
  ~Exploration() {};

  static void showDirections();

  void move(Direction dir);

 private:
  Map map;
  int cur_row = 0;
  int cur_col = 0;
  std::pair<int, int> current_position; // row,column
  Area current_area;
};