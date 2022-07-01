//
// Created by 大貫　弘貴 on 2022/07/01.
//

#ifndef CPP_MODULE_CLAPTRAP_H
#define CPP_MODULE_CLAPTRAP_H

#include <iostream>

class ClapTrap {
private:
	std::string name;
	int hitPoint;
	int energyPoint;
	int attackDamage;

public:
	ClapTrap(std::string name);
	ClapTrap(std::string name, int hitPoint, int energyPoint, int attackDamage);
	~ClapTrap();
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};


#endif //CPP_MODULE_CLAPTRAP_H