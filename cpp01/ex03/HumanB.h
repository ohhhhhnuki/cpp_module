//
// Created by 大貫　弘貴 on 2022/06/18.
//

#ifndef HUMANB_H
#define HUMANB_H

#include "Weapon.h"

class HumanB {
private:
	std::string name;
	Weapon* weapon;

public:
	HumanB(std::string name);
	~HumanB();
	void setWeapon(Weapon& weapon);
	void attack();
};


#endif
