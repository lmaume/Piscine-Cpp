#include "phonebook.hpp"

int	AddContact(std::string	TerminalEntry, PhoneBook *_PhoneBook, int i)
{
	if (TerminalEntry == "ADD")
	{
		//First Name//
		std::cout << "Contact's First Name." << std::endl;
		std::getline(std::cin, TerminalEntry);
		if (TerminalEntry.empty() == false)
		{
			_PhoneBook->SetContactFirstName(i, TerminalEntry);
			//Last Name//
			std::cout << "Contact's Last Name." << std::endl;
			std::getline(std::cin, TerminalEntry);
			if (TerminalEntry.empty() == false)
			{
				_PhoneBook->SetContactLastName(i, TerminalEntry);
				//Nickname//
				std::cout << "Contact's Nickname." << std::endl;
				std::getline(std::cin, TerminalEntry);
				if (TerminalEntry.empty() == false)
				{
					_PhoneBook->SetContactNickName(i, TerminalEntry);
					//Phone Number//
					std::cout << "Contact's Phone Number." << std::endl;
					std::getline(std::cin, TerminalEntry);
					if (TerminalEntry.empty() == false)
					{
						_PhoneBook->SetContactPhoneNumber(i, TerminalEntry);
						//Darkest Secret//
						std::cout << "Contact's Darkest Secret." << std::endl;
						std::getline(std::cin, TerminalEntry);
						if (TerminalEntry.empty() == false)
						{
							_PhoneBook->SetContactDarkestSecret(i, TerminalEntry);
							return (i + 1);
						}	
					}
				}
			}
		}
	}
	_PhoneBook->ClearContact(i);
	return (i);
}


void	PrintContactList(PhoneBook *_PhoneBook)
{
	int j = 0;
	std::cout << "╒══════════╤══════════╤══════════╤══════════╕\n";
	std::cout << "|     index|first name| last name|  nickname|\n";
	std::cout << "╞══════════╪══════════╪══════════╪══════════╡" << std::endl;
	while (_PhoneBook->GetContact(j).GetFirstName().empty() == false)
	{
		std::cout << "|         " << j + 1 << "|";
		//First Name//
		if (_PhoneBook->GetContact(j).GetFirstName().size() <= 10)
		{
			std::cout << std::setw(10);
			std::cout << _PhoneBook->GetContact(j).GetFirstName() << "|";
		}
		else
			std::cout << _PhoneBook->GetContact(j).GetFirstName().substr(0, 9) << ".|";
		//Last Name//
		if (_PhoneBook->GetContact(j).GetLastName().size() <= 10)
		{
			std::cout << std::setw(10);
			std::cout << _PhoneBook->GetContact(j).GetLastName() << "|";
		}
		else
			std::cout << _PhoneBook->GetContact(j).GetLastName().substr(0, 9) << ".|";
		//Nickname//
		if (_PhoneBook->GetContact(j).GetNickName().size() <= 10)
		{
			std::cout << std::setw(10);
			std::cout << _PhoneBook->GetContact(j).GetNickName() << "|";
		}
		else
			std::cout << _PhoneBook->GetContact(j).GetNickName().substr(0, 9) << ".|";
		std::cout << "\n";
		j++;
	}
	std::cout << "╘══════════╧══════════╧══════════╧══════════╛" << std::endl;
}

void	SearchContact(std::string	TerminalEntry, PhoneBook *_PhoneBook)
{
	int	Index = 0;

	if (TerminalEntry == "SEARCH")
	{
		PrintContactList(_PhoneBook);
		std::cout << "Enter contact's index fore more informations." << std::endl;
		std::cin >> TerminalEntry;
		Index = atoi(TerminalEntry.c_str());
		if (Index >= 1 && Index <= 8)
		{
			std::cout << "Contact n"<< Index << "\n";
			//First Name//
			std::cout << "First name\t: " << _PhoneBook->GetContact(Index - 1).GetFirstName() << "\n";
			//Last Name//
			std::cout << "Last name\t: " << _PhoneBook->GetContact(Index - 1).GetLastName() << "\n";
			//Nickname//
			std::cout << "Nickname\t: " << _PhoneBook->GetContact(Index - 1).GetNickName() << "\n";
			//PhoneNumber//
			std::cout << "Phone number\t: " << _PhoneBook->GetContact(Index - 1).GetPhoneNumber() << "\n";
			//DarkestSecret//
			std::cout << "Darkest Secret\t: " << _PhoneBook->GetContact(Index - 1).GetDarkestSecret() << "\n";
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

	std::cout << "Enter a command between ADD, SEARCH and EXIT" << std::endl;
	while (1)
	{
		if (i > 7)
			i = 0;
		std::getline(std::cin, TerminalEntry);
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
