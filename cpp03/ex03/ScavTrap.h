//
// Created by 大貫　弘貴 on 2022/07/01.
//

#ifndef CPP_MODULE_SCAVTRAP_H
#define CPP_MODULE_SCAVTRAP_H

#include "ClapTrap.h"

class ScavTrap : public ClapTrap{
private:
	int sHitPoint;
	int sEnergyPoint;
	int sAttackDamage;

public:
	ScavTrap(std::string name);
	~ScavTrap();
	void guardGate();
	int getEnergyPoint();
};


#endif //CPP_MODULE_SCAVTRAP_H
