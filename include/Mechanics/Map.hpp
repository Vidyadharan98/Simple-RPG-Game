// © 2025 Vidyadharan Anbuchezhian
// Licensed under the MIT License — see LICENSE and NOTICE files for details.

#pragma once

#include <string>
#include <vector>

#include "Mechanics/Area.hpp"

class Map {
 public:
  Map();
  ~Map() {};

  static void showMap();
  static std::pair<size_t, size_t> max_boundary;
  static std::vector<std::vector<Area>> grid;  // row - col

 private:
  int rows;
  int cols;

  void generate_map();
};