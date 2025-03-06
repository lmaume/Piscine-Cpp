#include "phonebook.hpp"

int	AddContact(std::string	TerminalEntry, PhoneBook *_PhoneBook, int i)
{
	if (TerminalEntry == "ADD")
	{
		//First Name//
		std::cout << "Contact's First Name." << std::endl;
		std::cin >> TerminalEntry;
		if (TerminalEntry != "\n")
			_PhoneBook->SetContactFirstName(i, TerminalEntry);
		//Last Name//
		std::cout << "Contact's Last Name." << std::endl;
		std::cin >> TerminalEntry;
		if (TerminalEntry != "\n")
			_PhoneBook->SetContactLastName(i, TerminalEntry);
		//Nickname//
		std::cout << "Contact's Nickname." << std::endl;
		std::cin >> TerminalEntry;
		if (TerminalEntry != "\n")
			_PhoneBook->SetContactNickName(i, TerminalEntry);
		//Phone Number//
		std::cout << "Contact's Phone Number." << std::endl;
		std::cin >> TerminalEntry;
		if (TerminalEntry != "\n")
			_PhoneBook->SetContactPhoneNumber(i, TerminalEntry);
		//Darkest Secret//
		std::cout << "Contact's Darkest Secret." << std::endl;
		std::cin >> TerminalEntry;
		if (TerminalEntry != "\n")
			_PhoneBook->SetContactDarkestSecret(i, TerminalEntry);
		i++;
	}
	return (i);
}

void	SearchContact(std::string	TerminalEntry, PhoneBook *_PhoneBook)
{
	if (TerminalEntry == "SEARCH")
	{
		int j = 0;
		std::cout << "_____________________________________________\n";
		std::cout << "|     index|first name| last name|  nickname|\n";
		while (_PhoneBook->GetContact(j).GetFirstName().empty() == false)
		{
			std::cout << "|         " << j + 1 << "|";
			//First Name//
			if (_PhoneBook->GetContact(j).GetFirstName().size() <= 10)
			{
				std::cout << std::setw(10);
				std::cout << _PhoneBook->GetContact(j).GetFirstName();
				std::cout << "|";
			}
			else
				std::cout << _PhoneBook->GetContact(j).GetFirstName().substr(0, 9) << ".|";
			//Last Name//
			if (_PhoneBook->GetContact(j).GetLastName().size() <= 10)
			{
				std::cout << std::setw(10);
				std::cout << _PhoneBook->GetContact(j).GetLastName();
				std::cout << "|";
			}
			else
				std::cout << _PhoneBook->GetContact(j).GetLastName().substr(0, 9) << ".|";
			//Nickname//
			if (_PhoneBook->GetContact(j).GetNickName().size() <= 10)
			{
				std::cout << std::setw(10);
				std::cout << _PhoneBook->GetContact(j).GetNickName();
			}
			else
				std::cout << _PhoneBook->GetContact(j).GetNickName().substr(0, 9) << ".";
			std::cout << "|\n";
			j++;
		}
	}
}

int main(void)
{
	PhoneBook	_PhoneBook;
	std::string	TerminalEntry;
	std::string	Temp;
	int			i = 0;
	int			j = 0;

	while (1)
	{
		if (i > 7)
			i = 7;
		std::cin >> TerminalEntry;
		if (std::cin.eof())
			break ;
		i = AddContact(TerminalEntry, &_PhoneBook, i);
		SearchContact(TerminalEntry, &_PhoneBook);
		if (TerminalEntry == "EXIT")
			return (0);
		j++;
	}
	return (1);
}
