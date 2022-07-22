//
// Created by 大貫　弘貴 on 2022/07/01.
//

#include "DiamondTrap.h"

DiamondTrap::DiamondTrap() {
	std::cout << "[DiamondTrap] Default constructor called." << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ScavTrap(name), FragTrap(name) {
}

DiamondTrap::~DiamondTrap() {
	std::cout << "[DiamondTrap] Destructor called." << std::endl;
}

void DiamondTrap::whoAmI() {
	std::cout << "DiamondTrap name is " << this->name << std::endl;
}

void DiamondTrap::attack() {
	std::cout << "soon...." << std::endl;
}