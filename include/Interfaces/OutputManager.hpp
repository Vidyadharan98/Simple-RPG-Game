// © 2025 Vidyadharan Anbuchezhian
// Licensed under the MIT License — see LICENSE and NOTICE files for details.

#pragma once

#include <fstream>
#include <iostream>
#include <map>
#include <string>
#include <vector>

#include "Mechanics/Area.hpp"

class OutputManager {
 public:
  static void printLines(const std::vector<std::string>& lines);
  static void print(const std::string& message);
  static void printAsciiArt(const std::string& art_path);
  static void printAsciiForAreaType(AreaType type);
  static void clearScreen();

 private:
  OutputManager() = delete;  // Prevent instantiation
};
