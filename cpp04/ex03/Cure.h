//
// Created by 大貫　弘貴 on 2022/07/02.
//

#ifndef CPP_MODULE_CURE_H
#define CPP_MODULE_CURE_H

#include "AMateria.h"

class Cure : public AMateria {
public:
	Cure(const std::string &type);
	Cure();
	~Cure();
	AMateria* clone() const;
	void use(ICharacter& targer);
};


#endif //CPP_MODULE_CURE_H
