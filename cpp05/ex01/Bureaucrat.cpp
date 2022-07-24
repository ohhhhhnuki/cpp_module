//
// Created by 大貫　弘貴 on 2022/07/02.
//

#include "Bureaucrat.h"
#include "Form.h"

Bureaucrat::Bureaucrat() {
	std::cout << "[Bureaucrat] Default constructor called." << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name), grade(grade) {
	std::cout << "[Bureaucrat] Constructor called." << std::endl;
	if (grade < 1)
		throw new GradeTooHighException;
	else if (grade > 150)
		throw new GradeTooLowException;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) {
	std::cout << "[Bureaucrat] Copy Constructor called." << std::endl;
	*this = other;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &other) {
	std::cout << "[Bureaucrat] Copy assignment operator called." << std::endl;
	if (this != &other) {
		this->name = other.name;
		this->grade = other.grade;
	}
	return *this;
}

std::ostream& operator<<(std::ostream &os, const Bureaucrat &bureaucrat) {
	os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return os;
}

Bureaucrat::~Bureaucrat() {
	std::cout << "[Bureaucrat] Destructor called." << std::endl;
}

const std::string &Bureaucrat::getName() const {
	return name;
}

int Bureaucrat::getGrade() const {
	return grade;
}


void Bureaucrat::signForm(Form form) {
	try {
		form.beSigned(*this);
		std::cout << this->name << " signed " << form.getName() << std::endl;
	} catch (GradeTooLowException e) {
		std::cout << this->name << " couldn't sign " << form.getName() << " because " << e.what() << std::endl;
	} catch (std::exception e) {
		std::cout << "something wrong!" << std::endl;
	}
}