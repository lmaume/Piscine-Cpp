#include <iostream>
#include <cctype>



int main(int argc, char **argv)
{
	std::string				str;
	int						i = 1;
	int						j = 0;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
		while (i < argc)
		{
			j = 0;
			while (argv[i][j] != '\0')
			{
				str.push_back(toupper(argv[i][j]));
				j++;
			}
			if (i != argc - 1 && argv[i][j - 1] != ' ' && argv[i + 1][0] != ' ')
				str.push_back(' ');
			i++;
		}
	str.push_back('\n');
	std::cout << str;
	return (0);
}
