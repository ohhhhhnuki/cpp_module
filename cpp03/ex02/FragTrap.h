//
// Created by 大貫　弘貴 on 2022/07/01.
//

#ifndef CPP_MODULE_FRAGTRAP_H
#define CPP_MODULE_FRAGTRAP_H

#include "ClapTrap.h"

class FragTrap : public ClapTrap {
public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap& other);
	FragTrap& operator=(const FragTrap& other);
	~FragTrap();

	void highFivesGuys(void);
};


#endif //CPP_MODULE_FRAGTRAP_H
