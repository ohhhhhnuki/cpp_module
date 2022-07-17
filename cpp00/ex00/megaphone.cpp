//
// Created by 大貫　弘貴 on 2022/07/17.
//
#include <iostream>

void	convert_upper_case(std::string str) {
	char	tmp;
	size_t	i;

	i = 0;
	while (str[i] != '\0') {
		tmp = std::toupper(str[i]);
		std::cout << tmp;
		i++;
	}
}

int main(int argc, char **argv) {
	size_t	i;

	i = 0;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else {
		argv++;
		while (argv[i] != NULL) {
			convert_upper_case(argv[i]);
			i++;
		}
		std::cout << std::endl;
	}
	return (0);
}