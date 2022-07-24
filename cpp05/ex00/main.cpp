//
// Created by 大貫　弘貴 on 2022/07/02.
//

#include <iostream>
#include "Bureaucrat.h"

int main() {
	try {
		while (true) {
			std::string bureaucratName;
			int bureaucratGrade;

			std::cout << std::endl << "Let`s create Bureaucrat!!" << std::endl;

			std::cout << "input Bureaucrat name > ";
			std::cin >> bureaucratName;

			std::cout << "input Bureaucrat grade > ";
			std::cin >> bureaucratGrade;

			Bureaucrat bureaucrat(bureaucratName, bureaucratGrade);
			std::cout << bureaucrat << std::endl;
		}
	} catch (GradeTooHighException* e) {
		std::cerr << "grade is too high! " << e->what() << std::endl;
	} catch (GradeTooLowException* e) {
		std::cerr << "grade is too low! " << e->what() << std::endl;
	} catch (std::exception e) {
		std::cerr << "something wrong! " << e.what() << std::endl;
	}
}