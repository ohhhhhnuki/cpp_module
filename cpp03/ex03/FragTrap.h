//
// Created by 大貫　弘貴 on 2022/07/01.
//

#ifndef CPP_MODULE_FRAGTRAP_H
#define CPP_MODULE_FRAGTRAP_H

#include "ClapTrap.h"

class FragTrap : public ClapTrap{
private:
	int fHitPoint;
	int fEnergyPoint;
	int fAttackDamage;

public:
	FragTrap(std::string name);
	~FragTrap();
	void highFiveGuys();
	int getHitPoint();
	int getAttackDamage();
};


#endif //CPP_MODULE_FRAGTRAP_H
