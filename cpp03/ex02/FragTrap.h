//
// Created by 大貫　弘貴 on 2022/07/01.
//

#ifndef CPP_MODULE_FRAGTRAP_H
#define CPP_MODULE_FRAGTRAP_H

#include "ClapTrap.h"

class FragTrap : public ClapTrap{
public:
	FragTrap(std::string name);
	~FragTrap();
	void highFivesGuys(void);
};


#endif //CPP_MODULE_FRAGTRAP_H
