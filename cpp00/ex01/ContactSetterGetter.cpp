#include "phonebook.hpp"

Contact::Contact(){}
Contact::~Contact(){}

std::string 	Contact::GetFirstName() const {return (Contact::_FirstName);}

std::string 	Contact::GetLastName() const {return (Contact::_LastName);}

std::string 	Contact::GetNickName() const {return (Contact::_NickName);}

std::string 	Contact::GetDarkestSecret() const {return (Contact::_DarkestSecret);}

std::string 	Contact::GetPhoneNumber() const {return (Contact::_PhoneNumber);}

void	Contact::SetFirstName(std::string FirstName)
{
	if (FirstName.empty() == false)
		this->_FirstName = FirstName;
}

void	Contact::SetLastName(std::string LastName)
{
	if (LastName.empty() == false)
		this->_LastName = LastName;
}

void	Contact::SetNickName(std::string NickName)
{
	if (NickName.empty() == false)
		this->_NickName = NickName;
}

void	Contact::SetDarkestSecret(std::string DarkestSecret)
{
	if (DarkestSecret.empty() == false)
		this->_DarkestSecret = DarkestSecret;
}

void	Contact::SetPhoneNumber(std::string PhoneNumber)
{
	if (PhoneNumber.empty() == false)
		this->_PhoneNumber = PhoneNumber;
}
