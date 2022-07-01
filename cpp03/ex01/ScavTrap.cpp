//
// Created by 大貫　弘貴 on 2022/07/01.
//

#include "ScavTrap.h"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20) {
	std::cout << "ScavTrap constructor called." << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "destructor called." << std::endl;
}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
}