//
// Created by 大貫　弘貴 on 2022/07/01.
//

#ifndef CPP_MODULE_SCAVTRAP_H
#define CPP_MODULE_SCAVTRAP_H

#include <iostream>
#include "ClapTrap.h"

class ScavTrap : public ClapTrap{
public:
//	ScavTrap();
	ScavTrap(std::string name);
	~ScavTrap();
	void guardGate();
};


#endif //CPP_MODULE_SCAVTRAP_H
