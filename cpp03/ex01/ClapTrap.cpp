//
// Created by 大貫　弘貴 on 2022/07/01.
//

#include "ClapTrap.h"

ClapTrap::ClapTrap(std::string name) {
	std::cout << "default constructor called." << std::endl;
	this->name = name;
	this->hitPoint = 10;
	this->energyPoint = 10;
	this->attackDamage = 0;
}

ClapTrap::ClapTrap(std::string name, int hitPoint, int energyPoint, int attackDamage) {
	std::cout << "default constructor called." << std::endl;
	this->name = name;
	this->hitPoint = hitPoint;
	this->energyPoint = energyPoint;
	this->attackDamage = attackDamage;
}

ClapTrap::~ClapTrap() {
	std::cout << "destructor called." << std::endl;
}

void ClapTrap::attack(const std::string &target) {
	std::cout << "ClapTrap " << this->name << "attacks " << target << ", causing " << this->attackDamage << "points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	std::cout << "ClapTrap " << this->name << "take damage " << amount << std::endl;
	this->hitPoint -= amount;
}

void ClapTrap::beRepaired(unsigned int amount) {
	std::cout << "ClapTrap " << this->name << "be repaired " << amount << std::endl;
	this->hitPoint += amount;
	this->energyPoint--;
}