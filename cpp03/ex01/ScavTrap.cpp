//
// Created by 大貫　弘貴 on 2022/07/01.
//

#include "ScavTrap.h"

ScavTrap::ScavTrap() {
	std::cout << "[ScavTrap] Default constructor called." << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	std::cout << "[ScavTrap] constructor called." << std::endl;
	this->setHitPoint(100);
	this->setEnergyPoint(50);
	this->setAttackDamage(20);
}

ScavTrap::ScavTrap(const ScavTrap& other) {
	std::cout << "[ScavTrap] copy constructor called." << std::endl;
	*this = other;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &other) {
	std::cout << "[ScavTrap] Copy assignment operator called" << std::endl;
	if (this != &other) {
		this->setName(other.getName());
		this->setHitPoint(other.getHitPoint());
		this->setEnergyPoint(other.getEnergyPoint());
		this->setAttackDamage(other.getAttackDamage());
	}
	return *this;
}

ScavTrap::~ScavTrap() {
	std::cout << "[ScavTrap] Destructor called." << std::endl;
}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
}