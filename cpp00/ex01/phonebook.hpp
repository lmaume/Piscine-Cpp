#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include <iostream>
#include <cctype>
#include <limits.h>

class Contact
{
	private:
		std::string 	FirstName;	
		std::string 	LastName;
		std::string 	NickName;
		std::string 	DarkestSecret;
		unsigned long	PhoneNumber;
	public:
		std::string 	GetFirstName() const {return (this->FirstName);}
		std::string 	GetLastName() const {return (this->LastName);}
		std::string 	GetNickName() const {return (this->NickName);}
		std::string 	GetDarkestSecret() const {return (this->DarkestSecret);}
		unsigned long	GetPhoneNumber() const {return (this->PhoneNumber);}
		void			SetFirstName(std::string FirstName);
		void			SetLastName(std::string LastName);
		void			SetNickName(std::string NickName);
		void			SetDarkestSecret(std::string DarkestSecret);
		void			SetPhoneNumber(unsigned long PhoneNumber);
};

inline void	Contact::SetFirstName(std::string FirstName)
{
	if (FirstName.empty() == false)
		this->FirstName = FirstName;
}

inline void	Contact::SetLastName(std::string LastName)
{
	if (LastName.empty() == false)
		this->LastName = LastName;
}

inline void	Contact::SetNickName(std::string NickName)
{
	if (NickName.empty() == false)
		this->NickName = NickName;
}

inline void	Contact::SetDarkestSecret(std::string DarkestSecret)
{
	if (DarkestSecret.empty() == false)
		this->DarkestSecret = DarkestSecret;
}

inline void	Contact::SetPhoneNumber(unsigned long PhoneNumber)
{
	if (PhoneNumber <= ULONG_MAX)
		this->PhoneNumber = PhoneNumber;
}

class PhoneBook
{
	private:
		Contact _ContactTab[8];
	public:
		Contact GetContact(int id);
};

inline Contact PhoneBook::GetContact(int id)
{
	if (id >= 0 && id <= 7)
		return (this->_ContactTab[id]);
	return (Contact());
}

#endif