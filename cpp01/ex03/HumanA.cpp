//
// Created by 大貫　弘貴 on 2022/06/18.
//

#include "HumanA.h"

HumanA::HumanA(std::string name, Weapon& weapon) : name(name), weapon(weapon) {
	std::cout << "[HumanA] constructor called." << std::endl;
}

//HumanA::HumanA() : name("default"), weapon(Weapon("default")) {
//	std::cout << "[HumanA] default constructor called." << std::endl;
//}

HumanA::~HumanA() {
	std::cout << "[HumanA] destructor called." << std::endl;
}

void HumanA::attack() {
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}
