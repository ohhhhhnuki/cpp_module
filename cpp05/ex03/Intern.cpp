//
// Created by 大貫　弘貴 on 2022/07/06.
//

#include "Intern.h"

Intern::Intern() {
	std::cout << "[Intern] Default Constructor called." << std::endl;
}

Intern::Intern(const Intern& other) {
	std::cout << "[Intern] Copy Constructor called." << std::endl;
	*this = other;
}

Intern& Intern::operator=(const Intern& other) {
	std::cout << "[Intern] Copy assignment operator called." << std::endl;
	return *this;
}

Intern::~Intern() {
	std::cout << "[Intern] Destructor called." << std::endl;
}

Form* Intern::makeForm(std::string formName, std::string formTarget) {
	std::cout << "Intern creates " << formName << " form" << std::endl;

	if (formName == "robotomy")
		return new RobotomyRequestForm(formTarget);
	else if (formName == "President")
		return new PresidentialPardonForm(formTarget);
	else if (formName == "Shrubbery")
		return new ShrubberyCreationForm(formTarget);
	else {
		std::cout << "formName don`t exist." << std::endl;
		return NULL;
	}
}