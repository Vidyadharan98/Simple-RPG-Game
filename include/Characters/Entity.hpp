// © 2025 Vidyadharan Anbuchezhian
// Licensed under the MIT License — see LICENSE and NOTICE files for details.

#pragma once

#include <iomanip>  // for std::setw
#include <iostream>
#include <string>

#include "Interfaces/OutputManager.hpp"

class Entity {
 public:
  Entity();

  void showStatus() const;
  void setName(std::string player_name);

  const std::string& getName() const;
  int getHealth() const;
  int getGold() const;
  int getXP() const;

  void addGold(int amount);
  void addXP(int amount);
  void takeDamage(int amount);

 private:
  std::string name;
  int health;
  int gold;
  int xp;
};