//
// Created by 大貫　弘貴 on 2022/06/30.
//

#include "ClapTrap.h"

int main() {
	ClapTrap clapTrap("testA");

	clapTrap.beRepaired(100);
	clapTrap.attack("test");
	clapTrap.takeDamage(10);
}