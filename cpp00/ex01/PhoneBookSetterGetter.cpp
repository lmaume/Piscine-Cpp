#include "phonebook.hpp"

PhoneBook::PhoneBook(){}
PhoneBook::~PhoneBook(){}

Contact PhoneBook::GetContact(int id)
{
	if (id >= 0 && id <= 7)
		return (this->_ContactTab[id]);
	return (Contact());
}

void PhoneBook::SetContactFirstName(int id, std::string Name)
{
	this->_ContactTab[id].SetFirstName(Name);
}

void PhoneBook::SetContactLastName(int id, std::string Name)
{
	this->_ContactTab[id].SetLastName(Name);
}

void PhoneBook::SetContactNickName(int id, std::string Name)
{
	this->_ContactTab[id].SetNickName(Name);
}

void PhoneBook::SetContactDarkestSecret(int id, std::string Name)
{
	this->_ContactTab[id].SetDarkestSecret(Name);
}

void PhoneBook::SetContactPhoneNumber(int id, std::string PhoneNumber)
{
	this->_ContactTab[id].SetPhoneNumber(PhoneNumber);
}

void PhoneBook::ClearContact(int id)
{
	this->_ContactTab[id].ClearContact();
}
