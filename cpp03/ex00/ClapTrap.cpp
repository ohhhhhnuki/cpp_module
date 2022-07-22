//
// Created by 大貫　弘貴 on 2022/06/30.
//

#include "ClapTrap.h"

ClapTrap::ClapTrap() {
	std::cout << "[ClapTrap] Default constructor called." << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name), hitPoint(10), energyPoint(10), attackDamage(10) {
	std::cout << "[ClapTrap] constructor called." << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "[ClapTrap] Destructor called." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) {
	std::cout << "[ClapTrap] Copy constructor called." << std::endl;
	*this = other;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
	std::cout << "[ClapTrap] Copy assignment operator called" << std::endl;
	if (this != &other) {
		name = other.name;
		hitPoint = other.hitPoint;
		energyPoint = other.energyPoint;
		attackDamage = other.attackDamage;
	}
	return *this;
}

void ClapTrap::attack(const std::string &target) {
	if (energyPoint <= 0 || hitPoint <= 0) {
		std::cout << "ClapTrap " << name << " lack of energyPoint or hitPoint." << std::endl;
	} else if (energyPoint > 0) {
		std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
		energyPoint--;
	}
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (energyPoint <= 0 || hitPoint <= 0) {
		std::cout << "ClapTrap " << name << " lack of energyPoint or hitPoint." << std::endl;
	} else if (energyPoint > 0) {
		std::cout << "ClapTrap " << name << " take damage " << amount << std::endl;
		hitPoint -= amount;
		energyPoint--;
	}
}

void ClapTrap::beRepaired(unsigned int amount) {
	std::cout << "ClapTrap " << name << " be repaired " << amount << std::endl;
	hitPoint += amount;
	energyPoint--;
}