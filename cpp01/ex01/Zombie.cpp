// Created by 大貫　弘貴 on 2022/06/14.
//

#include "Zombie.h"

Zombie::Zombie(std::string name) {
	this->name = name;
}

Zombie::Zombie() {}

Zombie::~Zombie() {
	std::cout << "name: " << this->name << std::endl;
}

void Zombie::announce() {
	std::cout << name << ":" << "BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name) {
	this->name = name;
}