//
// Created by 大貫　弘貴 on 2022/07/04.
//

#ifndef CPP_MODULE_PRESIDENTIALPARDONFORM_H
#define CPP_MODULE_PRESIDENTIALPARDONFORM_H

#include <iostream>
#include "Bureaucrat.h"
#include "Form.h"

class PresidentialPardonForm : public Form{
private:
	int pSignableScore;
	int pExecutableScore;

public:
	PresidentialPardonForm(std::string target);
	~PresidentialPardonForm();
	void execute(Bureaucrat const & executor) const;
};


#endif //CPP_MODULE_PRESIDENTIALPARDONFORM_H
