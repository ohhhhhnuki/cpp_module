//
// Created by 大貫　弘貴 on 2022/07/04.
//

#include "Form.h"

Form::Form(std::string name, int const signableScore, int const executableScore) {
	std::cout << "Form constructor called." << std::endl;
	this->name = name;
	this->isSigned = false;
	if (signableScore > 150 || executableScore > 150)
		throw new GradeTooHighException;
	else if (signableScore < 1 || executableScore < 1)
		throw new GradeTooLowException;
	this->signableScore = signableScore;
	this->executableScore = executableScore;
}

Form::~Form() {
	std::cout << "Form destructor called." << std::endl;
}

Form &Form::operator=(Form const &other)
{
	const_cast<std::string&>(this->name) = other.name;
	this->signableScore = other.signableScore;
	const_cast<int&>(signableScore) = other.signableScore;
	const_cast<int&>(executableScore) = other.executableScore;
	return *this;
}

std::ostream &operator<<(std::ostream &os, const Form &form) {
	os << "name: " << form.name << " isSigned: " << form.isSigned << " signableScore: " << form.signableScore
	   << " executableScore: " << form.executableScore;
	return os;
}

const std::string &Form::getName() const {
	return name;
}

int Form::getSignableScore() const {
	return signableScore;
}

int Form::getExecutableScore() const {
	return executableScore;
}

void Form::beSigned(Bureaucrat bureaucrat)
{
	if (this->signableScore < bureaucrat.getGrade())
		throw new GradeTooLowException();
	this->isSigned = true;
}
