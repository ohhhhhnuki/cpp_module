//
// Created by 大貫　弘貴 on 2022/07/04.
//

#include "PresidentialPardonForm.h"

PresidentialPardonForm::PresidentialPardonForm() : Form("default", 25, 5){
	std::cout << "[PresidentialPardonForm] Default Constructor called." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form(target, 25, 5){
	std::cout << "[PresidentialPardonForm] Constructor called." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other) : Form("default" , 25, 5) {
	std::cout << "[PresidentialPardonForm] Copy Constructor called." << std::endl;
	*this = other;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &other) {
	std::cout << "[PresidentialPardonForm] Copy assignment operator called." << std::endl;
	this->Form::operator=(other);
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {
	std::cout << "[PresidentialPardonForm] destructor called." << std::endl;
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const {
	if (executor.getGrade() > this->getExecutableGrade())
		throw GradeTooLowException();

	std::cout << this->getName() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}