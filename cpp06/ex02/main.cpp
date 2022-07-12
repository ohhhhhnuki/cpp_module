//
// Created by 大貫　弘貴 on 2022/07/12.
//
#include "Base.h"
#include "A.h"
#include "B.h"
#include "C.h"

Base* generate(void) {
	std::srand(std::time(NULL));
	int randomNumber = rand() % 3 + 1;

	switch (randomNumber) {
		case 1:
			return new A();
		case 2:
			return new B();
		case 3:
			return new C();
		default:
			return NULL;
	}
}

void identify(Base* p) {
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
	else
		std::cout << "Base" << std::endl;
	return ;
}

void identify(Base& p) {
	try {
		(void)dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	} catch (const std::bad_cast& bc) {
		try {
			(void)dynamic_cast<B&>(p);
			std::cout << "B" << std::endl;
		} catch (const std::bad_cast& bc) {
			try {
				(void)dynamic_cast<C&>(p);
				{ std::cout << "C" << std::endl; }
			} catch (const std::exception& bc) {
				std::cout << "Base" << std::endl;
			}
		}
	}
}

int main() {
	Base* test = generate();
	identify(test);
	identify(*test);
}