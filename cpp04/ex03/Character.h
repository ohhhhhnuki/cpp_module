//
// Created by 大貫　弘貴 on 2022/07/02.
//

#ifndef CPP_MODULE_CHARACTER_H
#define CPP_MODULE_CHARACTER_H

#include "ICharacter.h"
#include "AMateria.h"

class Character : public ICharacter {
private:
	std::string name;
	AMateria* materiaSlot[4];

public:
	Character();
	Character(std::string name);
	~Character();
	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
};


#endif //CPP_MODULE_CHARACTER_H
