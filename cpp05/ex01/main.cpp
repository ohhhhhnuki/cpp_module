//
// Created by 大貫　弘貴 on 2022/07/02.
//
#include "Form.h"
#include "Bureaucrat.h"

int main() {
	Form form("form", 100, 30);
	Bureaucrat bureaucrat("bureaucrat" , 20);

	bureaucrat.signForm(form);

	Form testForm("test", 50, 20);
	Bureaucrat testBureaucrat("test", 60);

	testBureaucrat.signForm(testForm);
	testForm.beSigned(bureaucrat);
}