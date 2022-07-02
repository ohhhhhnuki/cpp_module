//
// Created by 大貫　弘貴 on 2022/07/02.
//

#include "MateriaSource.h"

MateriaSource::MateriaSource() {
	std::cout << "MateriaSource default constructor called." << std::endl;
}

MateriaSource::~MateriaSource() {
	std::cout << "MateriaSource destructor called." << std::endl;
}

void MateriaSource::learnMateria(AMateria* aMateria) {
	for (int i = 0; i < 4; i++)
	{
		if (this->materiaList[i] == NULL)
		{
			this->materiaList[i] = aMateria;
			std::cout << "Learn: " << this->materiaList[i]->getType() << std::endl;
			break;
		}
	}
}

AMateria* MateriaSource::createMateria(const std::string &type) {
	for (int i = 0; i < 4; i++)
	{
		if (this->materiaList[i] && this->materiaList[i]->getType() == type)
		{
			std::cout << "Create: " << this->materiaList[i]->getType() << std::endl;
			return this->materiaList[i]->clone();
		}
	}
	return new Ice();
}