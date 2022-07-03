//
// Created by 大貫　弘貴 on 2022/07/04.
//

#include "RobotomyRequestForm.h"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form(target, 72, 45){
	std::cout << "RobotomyRequestForm constructor called." << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm() {
	std::cout << "RobotomyRequestForm destructor called." << std::endl;
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const {
	std::cout << "Gaaaaaaaaaaaa..." << std::endl;

	srand(time(NULL));
	int randomNumber = rand() % 2;
	if (randomNumber == 0)
		std::cout << "Success!" << std::endl;
	else
		std::cout << "Failure..." << std::endl;
}