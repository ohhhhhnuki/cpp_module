//
// Created by 大貫　弘貴 on 2022/06/14.
//
#include "Zombie.h"

Zombie* zombieHorde(int N, std::string name) {
	Zombie* zombieList = new Zombie[N];

	for (int i = 0; i < N; i++) {
		zombieList[i].setName(name);
	}
	return zombieList;
}