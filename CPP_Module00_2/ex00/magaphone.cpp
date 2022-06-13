#include <iostream>

void	convert_upper_case(std::string str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		char	tmp;

		tmp = std::toupper(str[i]);
		std::cout << tmp;
		i++;
	}
}

int main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE" << std::endl;
	else
	{
		size_t	i;

		i = 0;
		argv++;
		while (argv[i] != NULL)
		{
			convert_upper_case(argv[i]);
			i++;
		}
		std::cout << "\n";
	}
	return (0);
}