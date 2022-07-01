//
// Created by 大貫　弘貴 on 2022/07/01.
//

#include "ScavTrap.h"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	std::cout << "ScavTrap constructor called." << std::endl;
	this->sHitPoint = 100;
	this->sEnergyPoint = 50;
	this->sAttackDamage = 20;
}

ScavTrap::~ScavTrap() {
	std::cout << "destructor called." << std::endl;
}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
}

int ScavTrap::getEnergyPoint() {
	return this->sEnergyPoint;
}