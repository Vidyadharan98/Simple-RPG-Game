// © 2025 Vidyadharan Anbuchezhian
// Licensed under the MIT License — see LICENSE and NOTICE files for details.

#include "Interfaces/OutputManager.hpp"

void OutputManager::print(const std::string& message) {
  std::cout << message << std::endl;
}

void OutputManager::printLines(const std::vector<std::string>& lines) {
  for (const auto& line : lines) {
    print(line);
  }
}

void OutputManager::printAsciiArt(const std::string& art_path) {
  std::ifstream file(art_path);
  if (file.is_open()) {
    std::string line;
    while (std::getline(file, line)) {
      std::cout << "\033[1;36m" << line << "\033[0m"
                << std::endl;  // Cyan colored title
    }
    file.close();
  } else {
    std::cout << "!  Unable to load title art.\n";
  }
}

void OutputManager::printAsciiForAreaType(AreaType type) {
  switch (type) {
    case AreaType::Ground:
      printAsciiArt("assets/ASCII_Arts/Ground.txt");
      break;
    case AreaType::Forest:
      /// @todo: replace with forest art
      printAsciiArt("assets/ASCII_Arts/Ground.txt");
      break;
    case AreaType::Shop:
      /// @todo: replace with shop art
      printAsciiArt("assets/ASCII_Arts/Ground.txt");
      break;
    case AreaType::Cave:
      /// @todo: replace with cave art
      printAsciiArt("assets/ASCII_Arts/Ground.txt");
      break;
    case AreaType::Empty:
    default:
      print("(nothing here...)");
      break;
  }
}

void OutputManager::clearScreen() {
  std::cout << "\033[2J\033[1;1H";  // ANSI escape
}
