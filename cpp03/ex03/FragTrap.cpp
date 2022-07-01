//
// Created by 大貫　弘貴 on 2022/07/01.
//

#include "FragTrap.h"

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	std::cout << "FragTrap default constructor called." << std::endl;
	this->fHitPoint = 100;
	this->fEnergyPoint = 100;
	this->fAttackDamage = 30;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap destructor called." << std::endl;
}

void FragTrap::highFiveGuys() {
	std::cout << "high five!!!!!!!!!!!!!!!" << std::endl;
}

int FragTrap::getHitPoint() {
	return this->fHitPoint;
}

int FragTrap::getAttackDamage() {
	return this->fAttackDamage;
}