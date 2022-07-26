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

	PresidentialPardonForm presidentialPardonForm("test");
	RobotomyRequestForm robotomyRequestForm("test");
	ShrubberyCreationForm shrubberyCreationForm("test");

	std::cout << "------------------------------------" << std::endl;

	shrubberyCreationForm.execute(bureaucrat);
	robotomyRequestForm.execute(bureaucrat);
}