//
// Created by 大貫　弘貴 on 2022/06/21.
//

#include "Harl.h"

int main() {
	Harl harl;
	int instructoionNum;

	while (true) {
		std::cout << "input Harl instruction (1.DEBUG 2.INFO 3.WARNING 4.ERROR 5.EXIT) > ";
		std::cin >> instructoionNum;

		switch (instructoionNum) {
			case 1 : {
				harl.complain("DEBUG");
				break;
			}
			case 2 : {
				harl.complain("INFO");
				break;
			}
			case 3 : {
				harl.complain("WARNING");
				break;
			}
			case 4 : {
				harl.complain("ERROR");
				break;
			}
			case 5 : {
				exit(0);
			}
			default : {
				std::cout << "invalid input!" << std::endl;
			}
		}
	}
}