//
// Created by 大貫　弘貴 on 2022/07/04.
//

#ifndef CPP_MODULE_PRESIDENTIALPARDONFORM_H
#define CPP_MODULE_PRESIDENTIALPARDONFORM_H

#include <iostream>
#include "Bureaucrat.h"
#include "Form.h"

class PresidentialPardonForm : public Form{
public:
	PresidentialPardonForm();
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(const PresidentialPardonForm& other);
	PresidentialPardonForm& operator=(const PresidentialPardonForm& other);
	~PresidentialPardonForm();
	void execute(Bureaucrat const & executor) const;
};


#endif //CPP_MODULE_PRESIDENTIALPARDONFORM_H
