//
// Created by 大貫　弘貴 on 2022/06/18.
//

#include "Weapon.h"

Weapon::Weapon(std::string type) {
	this->type = type;
}

Weapon::Weapon() {}

void Weapon::setType(std::string type) {
	this->type = type;
}

std::string Weapon::getType() {
	return this->type;
}