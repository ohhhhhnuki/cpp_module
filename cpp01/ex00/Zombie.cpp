//
// Created by 大貫　弘貴 on 2022/06/14.
//

#include "Zombie.h"

Zombie::Zombie() : name("default"){
	std::cout << "[Zombie] default constructor called." << std::endl;
}

Zombie::Zombie(std::string name) : name(name) {
	std::cout << "[Zombie] constructor called." << std::endl;
}

Zombie::~Zombie() {
	std::cout << name << " is delete." << std::endl;
}

void Zombie::announce() {
	std::cout << name << ":" << "BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie* newZonbie(std::string name) {
	return new Zombie(name);
}

void randomChump(std::string name) {
	Zombie zombie(name);
	zombie.announce();
}