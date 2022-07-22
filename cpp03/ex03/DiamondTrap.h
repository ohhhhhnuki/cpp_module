//
// Created by 大貫　弘貴 on 2022/07/01.
//

#ifndef CPP_MODULE_DIAMONDTRAP_H
#define CPP_MODULE_DIAMONDTRAP_H

#include "../ex00/ClapTrap.h"
#include "../ex01/ScavTrap.h"
#include "../ex02/FragTrap.h"

class DiamondTrap : public ScavTrap, public FragTrap {
public:
	DiamondTrap();
	DiamondTrap(std::string name);
	~DiamondTrap();
	void whoAmI();
	void attack();
};


#endif //CPP_MODULE_DIAMONDTRAP_H
