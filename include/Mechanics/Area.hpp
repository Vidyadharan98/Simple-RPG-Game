// © 2025 Vidyadharan Anbuchezhian
// Licensed under the MIT License — see LICENSE and NOTICE files for details.

#pragma once

#include <string>

enum class AreaType { Empty, Ground, Forest, Shop, Cave };

class Area {
 public:
  Area() = default;
  Area(std::string name, AreaType type) : area_name(name), area_type(type) {}
  ~Area() {};

  std::string area_name;
  AreaType area_type;
};