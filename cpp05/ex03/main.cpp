//
// Created by 大貫　弘貴 on 2022/07/06.
//
#include "Intern.h"
#include "Form.h"

int main() {
	Intern someRandomIntern;
	Bureaucrat bureaucrat("test", 4);
	Form* rrf;

	rrf = someRandomIntern.makeForm("robotomy", "Bender");
	rrf->execute(bureaucrat);
}