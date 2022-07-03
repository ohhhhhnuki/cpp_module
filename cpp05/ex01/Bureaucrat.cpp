//
// Created by 大貫　弘貴 on 2022/07/02.
//

#include "Bureaucrat.h"
#include "Form.h"

Bureaucrat::Bureaucrat() {
	std::cout << "Bureaucrat default constructor called." << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) {
	if (grade > 150)
		throw new GradeTooHighException;
	else if (grade < 1)
		throw new GradeTooLowException;
	this->name = name;
	this->grade = grade;
}

Bureaucrat::~Bureaucrat() {
	std::cout << "Bureaucrat destructor called." << std::endl;
}

std::string Bureaucrat::getName() {
	return this->name;
}

int Bureaucrat::getGrade() {
	return this->grade;
}

void Bureaucrat::signForm(Form form) {
	std::cout << this->name << " signed " << form.getName() << std::endl;
}