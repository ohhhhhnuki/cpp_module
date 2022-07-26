//
// Created by 大貫　弘貴 on 2022/07/04.
//
#include "Bureaucrat.h"
#include "Form.h"
#include "PresidentialPardonForm.h"
#include "RobotomyRequestForm.h"
#include "ShrubberyCreationForm.h"

int main() {
	Bureaucrat bureaucrat("test", 40);
	Bureaucrat bureaucratTest("test", 2);

	PresidentialPardonForm presidentialPardonForm("test");
	RobotomyRequestForm robotomyRequestForm("test");
	ShrubberyCreationForm shrubberyCreationForm("test");

	std::cout << "------------------------------------" << std::endl;

	shrubberyCreationForm.execute(bureaucrat);
	robotomyRequestForm.execute(bureaucrat);
	presidentialPardonForm.execute(bureaucratTest);
}