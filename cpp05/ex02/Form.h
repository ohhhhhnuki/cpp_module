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
	int signableScore;
	int executableScore;

public:
	Form(std::string name, int const signableScore, int const executableScore);
	~Form();
	Form &operator=(Form const &other);
	friend std::ostream &operator<<(std::ostream &os, const Form &form);

	const std::string &getName() const;
	int getSignableScore() const;
	int getExecutableScore() const;

	void beSigned(Bureaucrat bureaucrat);
};

#endif //CPP_MODULE_FORM_H
