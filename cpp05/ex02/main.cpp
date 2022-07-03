//
// Created by 大貫　弘貴 on 2022/07/04.
//
#include "Bureaucrat.h"
#include "Form.h"
#include "PresidentialPardonForm.h"
#include "RobotomyRequestForm.h"
#include "ShrubberyCreationForm.h"

int main() {
	Bureaucrat bureaucrat;
	Form form("test", 10, 20);
	PresidentialPardonForm presidentialPardonForm("test");
	RobotomyRequestForm robotomyRequestForm("test");
	ShrubberyCreationForm shrubberyCreationForm("test");
}