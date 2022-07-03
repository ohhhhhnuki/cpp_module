//
// Created by 大貫　弘貴 on 2022/07/04.
//

#include "ShrubberyCreationForm.h"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form(target, 145, 137){
	std::cout << "ShrubberyCreationForm constructor called." << std::endl;
	sSignableGrade = 145;
	sExecutableGrade = 137;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	std::cout << "ShrubberyCreationForm destructor called." << std::endl;
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const {
	(void)executor;

	std::ofstream ofs(this->getName() + "_shrubbery");
	ofs << "ASCII tree" << std::endl;
}
