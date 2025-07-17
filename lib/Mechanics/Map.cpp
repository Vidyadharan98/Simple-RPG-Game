// © 2025 Vidyadharan Anbuchezhian
// Licensed under the MIT License — see LICENSE and NOTICE files for details.

#include "Mechanics/Map.hpp"

// Static Variables
std::pair<size_t, size_t> Map::max_boundary;
std::vector<std::vector<Area>> Map::grid;

Map::Map() {
  generate_map();
  Map::max_boundary.first = Map::grid.size();
  Map::max_boundary.second = Map::grid[0].size();
}

void Map::showMap() {}

void Map::generate_map() {
  Map::grid = {
      {Area("Home", AreaType::Ground), Area("Hidden Forest", AreaType::Forest),
       Area("Marketplace", AreaType::Shop)},
      {Area("Dark Cave Entrance", AreaType::Cave),
       Area("Forest Path", AreaType::Forest),
       Area("Abandoned Shop", AreaType::Shop)},
      {Area("Misty Clearing", AreaType::Ground),
       Area("Deep Forest", AreaType::Forest),
       Area("Cave Depths", AreaType::Cave)}};
}
