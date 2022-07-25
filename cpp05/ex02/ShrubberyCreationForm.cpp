//
// Created by 大貫　弘貴 on 2022/07/04.
//

#include "ShrubberyCreationForm.h"

ShrubberyCreationForm::ShrubberyCreationForm() : Form ("default", 150, 150) {
	std::cout << "[ShrubberyCreationForm] Default constructor called." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form(target, 145, 137){
	std::cout << "[ShrubberyCreationForm] Constructor called." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : Form("default" , 150, 150) {
	std::cout << "[ShrubberyCreationForm] Copy Constructor called." << std::endl;
	*this = other;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other) {
	std::cout << "[ShrubberyCreationForm] Copy assignment operator called." << std::endl;
	this->Form::operator=(other);
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	std::cout << "[ShrubberyCreationForm] Destructor called." << std::endl;
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const {
	(void)executor;

	if (executor.getGrade() > this->getExecutableGrade())
		throw GradeTooLowException();
	try {
		std::ofstream ofs(this->getName() + "_shrubbery");
		ofs << "." << std::endl;
		ofs << "├── Bureaucrat.cpp" << std::endl;
		ofs << "├── Bureaucrat.h" << std::endl;
		ofs << "├── Form.cpp" << std::endl;
		ofs << "├── Form.h" << std::endl;
		ofs << "├── Makefile" << std::endl;
		ofs << "├── PresidentialPardonForm.cpp" << std::endl;
		ofs << "├── PresidentialPardonForm.h" << std::endl;
		ofs << "├── RobotomyRequestForm.cpp" << std::endl;
		ofs << "├── RobotomyRequestForm.h" << std::endl;
		ofs << "├── ShrubberyCreationForm.cpp" << std::endl;
		ofs << "├── ShrubberyCreationForm.h" << std::endl;
		ofs << "└── main.cpp" << std::endl;
		ofs.close();
	} catch(std::exception e) {
		std::cout << "something wrong! " << e.what() << std::endl;
	}
}
