// © 2025 Vidyadharan Anbuchezhian
// Licensed under the MIT License — see LICENSE and NOTICE files for details.

#include "Characters/Entity.hpp"

Entity::Entity() : health(100), gold(50), xp(0) {}

void Entity::setName(std::string player_name) { name = player_name; }

void Entity::showStatus() const {
  OutputManager::print("\n Status \n");
  OutputManager::print(" Name   : " + name + "\n");
  OutputManager::print(" Health : " + std::to_string(health) + "\n");
  OutputManager::print(" Gold   : " + std::to_string(gold) + "\n");
  OutputManager::print(" XP     : " + std::to_string(xp) + "\n");
}

const std::string& Entity::getName() const { return name; }
int Entity::getHealth() const { return health; }
int Entity::getGold() const { return gold; }
int Entity::getXP() const { return xp; }

void Entity::addGold(int amount) { gold += amount; }
void Entity::addXP(int amount) { xp += amount; }
void Entity::takeDamage(int amount) { health -= amount; }