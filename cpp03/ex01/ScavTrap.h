//
// Created by 大貫　弘貴 on 2022/07/01.
//

#ifndef CPP_MODULE_SCAVTRAP_H
#define CPP_MODULE_SCAVTRAP_H

#include "ClapTrap.h"

class ScavTrap : public ClapTrap {
public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap& other);
	ScavTrap& operator=(const ScavTrap& other);
	~ScavTrap();

	void guardGate();
};


#endif //CPP_MODULE_SCAVTRAP_H
