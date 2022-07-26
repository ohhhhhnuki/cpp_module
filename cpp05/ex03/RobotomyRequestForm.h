//
// Created by 大貫　弘貴 on 2022/07/04.
//

#ifndef CPP_MODULE_ROBOTOMYREQUESTFORM_H
#define CPP_MODULE_ROBOTOMYREQUESTFORM_H

#include <iostream>
#include "Bureaucrat.h"
#include "Form.h"

class RobotomyRequestForm : public Form{
public:
	RobotomyRequestForm();
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(const RobotomyRequestForm& other);
	RobotomyRequestForm& operator=(const RobotomyRequestForm& other);
	~RobotomyRequestForm();
	void execute(Bureaucrat const & executor) const;
};


#endif //CPP_MODULE_ROBOTOMYREQUESTFORM_H
