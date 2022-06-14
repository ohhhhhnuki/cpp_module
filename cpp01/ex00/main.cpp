//
// Created by 大貫　弘貴 on 2022/06/14.
//
#include "Zombie.h"

int main(void) {
	Zombie *zombie = newZonbie("ohnuki");

	zombie->announce();
	randomChump("42Tokyo");
	delete zombie;
}