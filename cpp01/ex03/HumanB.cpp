//
// Created by 大貫　弘貴 on 2022/06/18.
//

#include "HumanB.h"

HumanB::HumanB(std::string name) {
	this->name = name;
}

void HumanB::setWeapon(Weapon weapon) {
	this->weapon = weapon;
}

void HumanB::attack() {
	std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}
