// © 2025 Vidyadharan Anbuchezhian
// Licensed under the MIT License — see LICENSE and NOTICE files for details.

#include "Interfaces/InputManager.hpp"

std::string InputManager::getLine(const std::string& prompt) {
  std::string input;
  std::cout << prompt;
  std::getline(std::cin, input);
  return input;
}

int InputManager::getIntInRange(const std::string& prompt, int min, int max) {
  int value;
  while (true) {
    std::cout << prompt;
    std::cin >> value;

    if (std::cin.fail() || value < min || value > max) {
      std::cin.clear();  // clear error flag
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(),
                      '\n');  // discard input
      std::cout << " Invalid input. Enter a number between " << min << " and "
                << max << ".\n";
    } else {
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(),
                      '\n');  // clean leftover
      return value;
    }
  }
}

char InputManager::getCharOption(const std::string& prompt,
                                 const std::string& options) {
  char choice;
  while (true) {
    std::cout << prompt;
    std::cin >> choice;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),
                    '\n');  // discard rest

    choice = std::tolower(choice);
    if (options.find(choice) != std::string::npos) {
      return choice;
    } else {
      std::cout << " Invalid option. Valid choices: " << options << "\n";
    }
  }
}
