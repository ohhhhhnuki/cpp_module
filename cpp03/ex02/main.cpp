//
// Created by 大貫　弘貴 on 2022/07/01.
//
#include "FragTrap.h"

int main() {
	FragTrap fragTrap("test");

	fragTrap.attack("target");
	fragTrap.takeDamage(10);
	fragTrap.beRepaired(40);
	fragTrap.highFivesGuys();
}