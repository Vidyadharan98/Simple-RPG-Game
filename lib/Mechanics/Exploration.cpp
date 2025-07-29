// © 2025 Vidyadharan Anbuchezhian
// Licensed under the MIT License — see LICENSE and NOTICE files for details.

#include "Mechanics/Exploration.hpp"

Exploration::Exploration() {}

void Exploration::showDirections() {
  OutputManager::printLines({"\nWhich direction do you want to go?",
                             "  ↑   1: Go North", "  ↓   2: Go South",
                             "  ←   3: Go West", "  →   4: Go East",
                             "      5: Exit exploration"});
}

void Exploration::move(Direction dir) {
  int new_row = cur_row;
  int new_col = cur_col;
  switch (dir) {
    case Direction::North:
      new_col++;
      break;
    case Direction::South:
      new_col--;
      break;
    case Direction::West:
      new_row--;
      break;
    case Direction::East:
      new_row++;
      break;
  }

  if (new_row >= 0 && new_row < Map::max_boundary.first && new_col >= 0 &&
      new_col < Map::max_boundary.second) {
    cur_row = new_row;
    cur_col = new_col;
    current_area = Map::grid[cur_row][cur_col];
    OutputManager::print("You have arrived to " + current_area.area_name);
    OutputManager::printAsciiForAreaType(current_area.area_type);
  } else {
    OutputManager::print("\nYou can't go that way.\n");
  }
}