#include "phonebook.hpp"


int main(void)
{
	PhoneBook	_PhoneBook;
	std::string	TerminalEntry;
	int			i = 0;

	while (1)
	{
		if (i > 7)
			i = 7;
		std::cin >> TerminalEntry;
		if (std::cin.eof())
			break ;
		if (TerminalEntry == "ADD")
		{
			std::cout << "Name your friend." << std::endl;
			std::cin >> TerminalEntry;
			if (TerminalEntry != "\n")
				_PhoneBook.SetContactFirstName(i, TerminalEntry);
			i++;
		}
		if (TerminalEntry == "SEARCH")
			return (2);
		if (TerminalEntry == "EXIT")
			return (0);
	}
	return (1);
}
