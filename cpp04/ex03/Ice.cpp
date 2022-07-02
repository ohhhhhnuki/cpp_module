//
// Created by 大貫　弘貴 on 2022/07/02.
//

#include "Ice.h"

Ice::Ice(const std::string &type) : AMateria(type) {
	std::cout << "Ice constructor called." << std::endl;
}

Ice::Ice() : AMateria() {
	std::cout << "Ice default constructor called." << std::endl;
}

Ice::~Ice() {
	std::cout << "Ice destructor called." << std::endl;
}

AMateria* Ice::clone() const {
	return new Ice();
}

void Ice::use(ICharacter& target) {
	(void)target;
	std::cout << "* shoots an ice bolt at " << this->getType() << " *" << std::endl;
}