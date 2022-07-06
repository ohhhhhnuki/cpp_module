//
// Created by 大貫　弘貴 on 2022/07/06.
//

#include "Intern.h"
#include "RobotomyRequestForm.h"

Intern::Intern() {
	std::cout << "Intern constructor called." << std::endl;
}

Intern::~Intern() {
	std::cout << "Intern destructor called." << std::endl;
}

Form* Intern::makeForm(std::string formName, std::string formTarget) {
	std::cout << "Intern creates " << formName << " form" << std::endl;

	if (formName == "robotome request")
		RobotomyRequestForm(formTarget);
	//他はまだ書いてない。
}