//
// Created by 大貫　弘貴 on 2022/07/04.
//

#ifndef CPP_MODULE_FORM_H
#define CPP_MODULE_FORM_H

#include <iostream>
#include "Bureaucrat.h"

class Bureaucrat;

class Form {
private:
	std::string name;
	bool isSigned;
	int signableGrade;
	int executableGrade;

public:
	Form(std::string name, int const signableGrade, int const executableGrade);
	~Form();
	Form(const Form& other);
	Form &operator=(Form const &other);
	const std::string &getName() const;
	int getSignableGrade() const;
	int getExecutableGrade() const;
	bool getIsSigned() const;

	void beSigned(Bureaucrat bureaucrat);
	virtual void execute(Bureaucrat const& executor) const = 0;
};

std::ostream &operator<<(std::ostream &os, const Form &form);

#endif //CPP_MODULE_FORM_H
