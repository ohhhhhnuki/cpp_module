//
// Created by 大貫　弘貴 on 2022/07/01.
//

#include "FragTrap.h"

FragTrap::FragTrap() {
	std::cout << "[FragTrap] Default constructor called." << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	std::cout << "[FragTrap] constructor called." << std::endl;
	this->setHitPoint(100);
	this->setHitPoint(100);
	this->setEnergyPoint(30);
}

FragTrap::FragTrap(const FragTrap &other) {
	std::cout << "[FragTrap] Copy constructor called." << std::endl;
	*this = other;
}

FragTrap& FragTrap::operator=(const FragTrap &other) {
	std::cout << "[ClapTrap] Copy assignment operator called." << std::endl;
	if (this != &other) {
		this->setName(other.getName());
		this->setHitPoint(other.getHitPoint());
		this->setEnergyPoint(other.getEnergyPoint());
		this->setAttackDamage(other.getAttackDamage());
	}
	return *this;
}

FragTrap::~FragTrap() {
	std::cout << "[FragTrap] Destructor called." << std::endl;
}

void FragTrap::highFivesGuys() {
	std::cout << "high five!!!!!!!!!!!!!!!" << std::endl;
}