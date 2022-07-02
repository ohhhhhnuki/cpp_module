//
// Created by 大貫　弘貴 on 2022/07/02.
//

#include "Cure.h"

Cure::Cure(const std::string &type) : AMateria(type) {
	std::cout << "Cure constructor called." << std::endl;
}

Cure::Cure() {
	std::cout << "Cure default constructor called." << std::endl;
}

Cure::~Cure() {
	std::cout << "Cure destructor called." << std::endl;
}

AMateria* Cure::clone() const {
	return new Cure();
}

void Cure::use(ICharacter& target) {
	(void)target;
	std::cout << "* heals " << this->getType() << "`s wounds *" << std::endl;
}