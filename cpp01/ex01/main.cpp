//
// Created by 大貫　弘貴 on 2022/06/14.
//
#include "Zombie.h"

int main(void) {
	int zonbieNum;

	std::cout << "input ZombieNum > ";
	std::cin >> zonbieNum;

	Zombie* zombiePtr = zonbieHorde(zonbieNum, "ohnuki");

	for (int i = 0; i < zonbieNum; i++)
		zombiePtr[i].announce();

//	delete [] zombiePtr;
}