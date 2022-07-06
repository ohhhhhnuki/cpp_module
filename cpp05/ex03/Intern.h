//
// Created by 大貫　弘貴 on 2022/07/06.
//

#ifndef CPP_MODULE_INTERN_H
#define CPP_MODULE_INTERN_H

#include <iostream>
#include "Form.h"

class Intern {
public:
	Intern();
	~Intern();
	Form* makeForm(std::string formName, std::string formTarget);
};


#endif //CPP_MODULE_INTERN_H
