//
// Created by 大貫　弘貴 on 2022/06/18.
//

#include "Weapon.h"

Weapon::Weapon(std::string type) : type(type) {
	std::cout << "[Weapon] constructor called." << std::endl;
}

Weapon::Weapon() {
	std::cout << "[Weapon] default constructor called." << std::endl;
}

Weapon::~Weapon() {
	std::cout << "[Weapon] destructor called." << std::endl;
}

const std::string &Weapon::getType() const {
	return type;
}

void Weapon::setType(const std::string &type) {
	this->type = type;
}

