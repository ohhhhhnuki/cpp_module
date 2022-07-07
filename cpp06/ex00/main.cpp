//
// Created by 大貫　弘貴 on 2022/07/07.
//
#include <iostream>

char convertStrToChar(std::string string) {
	return string[0];
}

int convertStrToInt(std::string string) {
	return std::stoi(string);
}

float convertStrToFloat(const char* string) {
	return std::strtof(string, NULL);
}

double convertStrToDouble(const char* string) {
	return std::strtod(string, NULL);
}

int main(int argc, char **argv) {

	if (argc != 2) {
		std::cout << "invalid input!" << std::endl;
		exit(1);
	}

	std::cout << "char: " << convertStrToChar(argv[1]) << std::endl;
	std::cout << "int: " << convertStrToInt(argv[1]) << std::endl;
	std::cout << "float: " << convertStrToFloat(argv[1]) << std::endl;
	std::cout << "double: " << convertStrToDouble(argv[1]) << std::endl;
}
