//
// Created by 大貫　弘貴 on 2022/06/30.
//

#include "ClapTrap.h"

int main() {
	ClapTrap clapTrap("test");

	clapTrap.attack("target");
	clapTrap.takeDamage(10);
	clapTrap.beRepaired(10);
}