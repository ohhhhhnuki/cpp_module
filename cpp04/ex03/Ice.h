//
// Created by 大貫　弘貴 on 2022/07/02.
//

#ifndef CPP_MODULE_ICE_H
#define CPP_MODULE_ICE_H

#include "AMateria.h"

class Ice : public AMateria {
public:
	Ice();
	Ice(const std::string &type);
	~Ice();
	AMateria* clone() const;
	void use(ICharacter& targer);
};


#endif //CPP_MODULE_ICE_H
