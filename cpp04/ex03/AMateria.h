//
// Created by 大貫　弘貴 on 2022/07/02.
//

#ifndef CPP_MODULE_AMATERIA_H
#define CPP_MODULE_AMATERIA_H

#include <iostream>
#include "ICharacter.h"

class AMateria {
protected:

public:
	AMateria(std::string const & type);
	std::string const & getType() const;
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};


#endif //CPP_MODULE_AMATERIA_H
