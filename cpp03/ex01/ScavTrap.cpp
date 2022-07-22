//
// Created by 大貫　弘貴 on 2022/07/01.
//

#include "ScavTrap.h"

ScavTrap::ScavTrap() {
	std::cout << "[ScavTrap] default constructor called." << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
		std::cout << "[ScavTrap] constructor called." << std::endl;
	hitPoint = 100;
	energyPoint = 50;
	attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& other) {
	std::cout << "[ScavTrap] copy constructor called." << std::endl;
	*this = other;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &other) {
	std::cout << "[ScavTrap] Copy assignment operator called" << std::endl;
	if (this != &other) {
		name = other.name;
		hitPoint = other.hitPoint;
		energyPoint = other.energyPoint;
		attackDamage = other.attackDamage;
	}
	return *this;
}

ScavTrap::~ScavTrap() {
	std::cout << "[ScavTrap] destructor called." << std::endl;
}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
}