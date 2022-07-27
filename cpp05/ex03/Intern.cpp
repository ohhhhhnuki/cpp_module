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
	(void)other;
	return *this;
}

Intern::~Intern() {
	std::cout << "[Intern] Destructor called." << std::endl;
}

Form* Intern::makeForm(std::string formName, std::string formTarget) {
	std::cout << "Intern creates " << formName << " form" << std::endl;
	int formIndex = (formName == "robotomy") * 1 + (formName == "President") * 2 + (formName == "Shrubbery") * 3;

	switch (formIndex) {
		case 1 : return new RobotomyRequestForm(formTarget);
		case 2 : return new PresidentialPardonForm(formTarget);
		case 3 : return new ShrubberyCreationForm(formTarget);
		default : {
			std::cout << "formName don`t exists." << std::endl;
			return NULL;
		}
	}
}