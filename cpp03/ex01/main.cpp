//
// Created by 大貫　弘貴 on 2022/07/01.
//
#include "ScavTrap.h"

int main() {
	ScavTrap scavTrap("test");

	scavTrap.guardGate();
	scavTrap.takeDamage(30);
	scavTrap.beRepaired(50);
	scavTrap.attack("target");
	scavTrap.guardGate();
}