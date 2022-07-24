//
// Created by 大貫　弘貴 on 2022/07/02.
//

#ifndef CPP_MODULE_BUREAUCRAT_H
#define CPP_MODULE_BUREAUCRAT_H

#include <iostream>

class Bureaucrat {
private:
	std::string name;
	int grade;

public:
	Bureaucrat();
	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat& other);
	Bureaucrat& operator=(const Bureaucrat &other);
	~Bureaucrat();
	const std::string &getName() const;
	int getGrade() const;
};

std::ostream& operator<<(std::ostream &os, const Bureaucrat &bureaucrat);
class GradeTooHighException : public std::exception {};
class GradeTooLowException : public std::exception {};


#endif //CPP_MODULE_BUREAUCRAT_H
