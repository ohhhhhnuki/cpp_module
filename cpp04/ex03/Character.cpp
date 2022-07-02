//
// Created by 大貫　弘貴 on 2022/07/02.
//

#include "Character.h"

Character::Character() {
	std::cout << "Character default constructor called." << std::endl;
}

Character::Character(std::string name) {
	this->name = name;
}

Character::~Character() {
	std::cout << "Character destructor called." << std::endl;
}

std::string const & Character::getName() const {
	return this->name;
}

void Character::equip(AMateria *m) {
	for (int i = 0; i < 4; i++) {
		if (this->materiaSlot[i] == NULL)
		{
			this->materiaSlot[i] = m;
			break;
		}
	}
}

void Character::unequip(int idx) {
	this->materiaSlot[idx] = NULL;
}

void Character::use(int idx, ICharacter &target) {
	this->materiaSlot[idx]->use(target);
}