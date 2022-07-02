//
// Created by 大貫　弘貴 on 2022/07/02.
//

#ifndef CPP_MODULE_IMATERIASOURCE_H
#define CPP_MODULE_IMATERIASOURCE_H

#include <iostream>
#include "AMateria.h"

class IMateriaSource {
public:
	virtual ~IMateriaSource() {}
	virtual void learnMateria(AMateria*) = 0;
	virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif //CPP_MODULE_IMATERIASOURCE_H
