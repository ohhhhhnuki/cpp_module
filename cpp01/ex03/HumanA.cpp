//
// Created by 大貫　弘貴 on 2022/06/18.
//

#include "HumanA.h"

HumanA::HumanA(std::string name, Weapon weapon) {
	this->name = name;
	this->weapon = weapon;
}

void HumanA::attack() {
	std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}