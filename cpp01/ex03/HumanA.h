//
// Created by 大貫　弘貴 on 2022/06/18.
//

#ifndef HUMANA_H
#define HUMANA_H

#include "Weapon.h"

class HumanA {
private:
	std::string name;
	Weapon weapon;

public:
	HumanA(std::string name, Weapon weapon);
	void attack();
};


#endif
