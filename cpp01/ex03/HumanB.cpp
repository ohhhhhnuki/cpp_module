//
// Created by 大貫　弘貴 on 2022/06/18.
//

#include "HumanB.h"

HumanB::HumanB(std::string name) : name(name), weapon(NULL) {
	std::cout << "[HumanB] constructor called." << std::endl;
}

HumanB::~HumanB() {
	std::cout << "[HumanB] destructor called." << std::endl;
}

void HumanB::setWeapon(Weapon& weapon) {
	this->weapon = &weapon;
}

void HumanB::attack() {
	std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}

