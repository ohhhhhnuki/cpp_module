//
// Created by 大貫　弘貴 on 2022/07/02.
//

#include <iostream>
#include "Bureaucrat.h"

int main() {
	try {
		Bureaucrat test1("test1", 100);
		Bureaucrat test2("test2", 160);
	} catch (GradeTooHighException* e) {
		e->what();
	} catch (GradeTooLowException* e) {
		e->what();
	} catch (std::exception e) {
		e.what();
	}
}