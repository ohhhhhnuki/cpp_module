//
// Created by 大貫　弘貴 on 2022/07/04.
//

#ifndef CPP_MODULE_ROBOTOMYREQUESTFORM_H
#define CPP_MODULE_ROBOTOMYREQUESTFORM_H

#include <iostream>
#include "Bureaucrat.h"
#include "Form.h"

class RobotomyRequestForm : public Form{
private:
	const int rSignableScore = 72;
	const int rExecutableScore = 45;

public:
	RobotomyRequestForm(std::string target);
	~RobotomyRequestForm();
	void execute(Bureaucrat const & executor) const;
};


#endif //CPP_MODULE_ROBOTOMYREQUESTFORM_H
