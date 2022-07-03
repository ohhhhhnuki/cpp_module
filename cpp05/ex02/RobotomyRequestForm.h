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
	int rSignableScore;
	int rExecutableScore;

public:
	RobotomyRequestForm(std::string target);
	~RobotomyRequestForm();
	void execute(Bureaucrat const & executor) const;
};


#endif //CPP_MODULE_ROBOTOMYREQUESTFORM_H
