//
// Created by 大貫　弘貴 on 2022/07/04.
//

#include "RobotomyRequestForm.h"

RobotomyRequestForm::RobotomyRequestForm() : Form("default", 72, 45) {
	std::cout << "[RobotomyRequestForm] Default Constructor called." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form(target, 72, 45){
	std::cout << "[RobotomyRequestForm] Constructor called." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : Form(other) {
	std::cout << "[RobotomyRequestForm] Copy Constructor called." << std::endl;
	*this = other;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other) {
	std::cout << "[RobotomyRequestForm] Copy assignment operator called." << std::endl;
	this->Form::operator=(other);
	return *this;
}


RobotomyRequestForm::~RobotomyRequestForm() {
	std::cout << "[RobotomyRequestForm] Destructor called." << std::endl;
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const {
	if (executor.getGrade() > this->getExecutableGrade())
		throw GradeTooLowException();

	std::cout << "Gaaaaaaaaaaaa..." << std::endl;

	srand(time(NULL));
	int randomNumber = rand() % 2;
	if (randomNumber == 0)
		std::cout << "Success!" << std::endl;
	else
		std::cout << "Failure..." << std::endl;
}