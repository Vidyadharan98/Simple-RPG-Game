// © 2025 Vidyadharan Anbuchezhian
// Licensed under the MIT License — see LICENSE and NOTICE files for details.

#pragma once

#include <cctype>
#include <iostream>
#include <limits>
#include <string>

class InputManager {
 public:
  static std::string getLine(const std::string& prompt);
  static int getIntInRange(const std::string& prompt, int min, int max);
  static char getCharOption(const std::string& prompt,
                            const std::string& options);
};
