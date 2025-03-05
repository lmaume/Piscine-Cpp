#include "phonebook.hpp"

inline Contact PhoneBook::GetContact(int id)
{
	if (id >= 0 && id <= 7)
		return (this->_ContactTab[id]);
	return (Contact());
}

inline void PhoneBook::SetContactFirstName(int id, std::string Name)
{
	this->_ContactTab[id].SetFirstName(Name);
}

inline void PhoneBook::SetContactLastName(int id, std::string Name)
{
	this->_ContactTab[id].SetLastName(Name);
}

inline void PhoneBook::SetContactNickName(int id, std::string Name)
{
	this->_ContactTab[id].SetNickName(Name);
}

inline void PhoneBook::SetContactDarkestSecret(int id, std::string Name)
{
	this->_ContactTab[id].SetDarkestSecret(Name);
}

inline void PhoneBook::SetContactPhoneNumber(int id, int PhoneNumber)
{
	this->_ContactTab[id].SetPhoneNumber(PhoneNumber);
}
