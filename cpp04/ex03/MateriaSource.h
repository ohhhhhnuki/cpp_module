//
// Created by 大貫　弘貴 on 2022/07/02.
//

#ifndef CPP_MODULE_MATERIASOURCE_H
#define CPP_MODULE_MATERIASOURCE_H

#include "IMateriaSource.h"
#include "Ice.h"

class MateriaSource : public IMateriaSource{
private:
	AMateria* materiaList[4];

public:
	MateriaSource();
	~MateriaSource();
	void learnMateria(AMateria* aMateria);
	AMateria* createMateria(std::string const & type);
};


#endif //CPP_MODULE_MATERIASOURCE_H
