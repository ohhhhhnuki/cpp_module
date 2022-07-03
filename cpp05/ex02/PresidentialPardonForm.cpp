//
// Created by 大貫　弘貴 on 2022/07/04.
//

#include "PresidentialPardonForm.h"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form(target, 25, 5){
	std::cout << "PresidentialPardonForm constructor called." << std::endl;
	this->pSignableScore = 5;
	this->pExecutableScore = 25;
}

PresidentialPardonForm::~PresidentialPardonForm() {
	std::cout << "PresidentialPardonForm destructor called." << std::endl;
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const {
	(void)executor;

	std::cout << this->getName() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}