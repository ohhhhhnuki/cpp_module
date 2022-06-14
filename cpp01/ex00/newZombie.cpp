//
// Created by 大貫　弘貴 on 2022/06/14.
//

#include "Zombie.h"

Zombie* newZonbie(std::string name) {
	return new Zombie(name);
}