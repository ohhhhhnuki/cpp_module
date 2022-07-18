// Created by 大貫　弘貴 on 2022/06/14.
//

#include "Zombie.h"

Zombie::Zombie(std::string name) : name(name) {
	std::cout << "[Zombie] constructor called." << std::endl;
}

Zombie::Zombie() : name("default"){
	std::cout << "[Zombie] default constructor called." << std::endl;
}

Zombie::~Zombie() {
	std::cout << "[Zombie] " << name << " is deleted" << std::endl;
}

void Zombie::announce() {
	std::cout << name << ":" << "BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(const std::string &name) {
	this->name = name;
}

Zombie* zombieHorde(int N, std::string name) {
	Zombie* zombieList = new Zombie[N];

	for (int i = 0; i < N; i++) {
		zombieList[i].setName(name);
	}
	return zombieList;
}