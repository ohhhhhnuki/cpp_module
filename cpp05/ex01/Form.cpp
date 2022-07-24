//
// Created by 大貫　弘貴 on 2022/07/02.
//

#include "Form.h"

Form::Form(std::string name, int const signableGrade, int const executableGrade) : name(name), isSigned(false), signableGrade(signableGrade), executableGrade(executableGrade) {
	std::cout << "[Form] Constructor called." << std::endl;
	if (signableGrade < 1 || executableGrade < 1)
		throw new GradeTooHighException;
	else if (signableGrade > 150 || executableGrade > 150)
		throw new GradeTooLowException;
}

Form::~Form() {
	std::cout << "[Form] Destructor called." << std::endl;
}

Form::Form(const Form &other) {
	std::cout << "[Form] Copy Constructor called." << std::endl;
	*this = other;
}

Form &Form::operator=(Form const &other)
{
	std::cout << "[Form] Copy assignment operator called." << std::endl;
	if (this != &other) {
		const_cast<std::string&>(this->name) = other.name;
		this->signableGrade = other.signableGrade;
		const_cast<int&>(signableGrade) = other.signableGrade;
		const_cast<int&>(executableGrade) = other.executableGrade;
	}
	return *this;
}

std::ostream &operator<<(std::ostream &os, const Form &form) {
	os << "name: " << form.getName() << " isSigned: " << form.getIsSigned() << " signableGrade: " << form.getSignableGrade() << " executableGrade: " << form.getExecutableGrade();
	return os;
}

const std::string &Form::getName() const {
	return name;
}

int Form::getSignableGrade() const {
	return signableGrade;
}

int Form::getExecutableGrade() const {
	return executableGrade;
}

bool Form::getIsSigned() const {
	return isSigned;
}

void Form::beSigned(Bureaucrat bureaucrat)
{
	if (this->signableGrade < bureaucrat.getGrade())
		throw new GradeTooLowException();
	this->isSigned = true;
}
