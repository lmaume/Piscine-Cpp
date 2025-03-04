#include "phonebook.hpp"

int main(void)
{
	std::string	Command;

	while (1)
	{
		std::cin >> Command;
		if (std::cin.eof())
			return (4);
		if (Command == "ADD")
			return (3);
		if (Command == "SEARCH")
			return (2);
		if (Command == "EXIT")
			return (0);
	}
	return (1);
}
