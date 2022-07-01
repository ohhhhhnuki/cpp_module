//
// Created by 大貫　弘貴 on 2022/07/01.
//

#include "FragTrap.h"

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 30) {
	std::cout << "FragTrap default constructor called." << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap destructor called." << std::endl;
}

void FragTrap::highFivesGuys() {
	std::cout << "high five!!!!!!!!!!!!!!!" << std::endl;
}