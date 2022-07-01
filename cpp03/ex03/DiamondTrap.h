//
// Created by 大貫　弘貴 on 2022/07/01.
//

#ifndef CPP_MODULE_DIAMONDTRAP_H
#define CPP_MODULE_DIAMONDTRAP_H

#include "ScavTrap.h"
#include "FragTrap.h"
#include "ClapTrap.h"

class DiamondTrap : public ScavTrap, public FragTrap{
private:
	std::string name;
	int dHitPoint;
	int dEnergyPoint;
	int dAttackDamage;

public:
	DiamondTrap(std::string name);
	~DiamondTrap();
	void whoAmI();
	void attack();
};


#endif //CPP_MODULE_DIAMONDTRAP_H
