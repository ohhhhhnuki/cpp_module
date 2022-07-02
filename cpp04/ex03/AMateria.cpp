//
// Created by 大貫　弘貴 on 2022/07/02.
//

#include "AMateria.h"

AMateria::AMateria(const std::string &type) {
	this->type = type;
}

AMateria::AMateria() {
	std::cout << "AMateria default constructor called." << std::endl;
}

AMateria::~AMateria() {
	std::cout << "AMateria destructor called." << std::endl;
}

const std::string & AMateria::getType() const {
	return this->type;
}