#ifndef CONTACT_H
# define CONTACT_H

#include <iostream>
#include <cctype>
#include <limits.h>

class Contact
{
	private:
		std::string		FirstName;	
		std::string		LastName;
		std::string		NickName;
		std::string		DarkestSecret;
		unsigned long	PhoneNumber;
	public:
		std::string		GetFirstName() const;
		std::string		GetLastName() const {return (this->LastName);}
		std::string		GetNickName() const {return (this->NickName);}
		std::string		GetDarkestSecret() const {return (this->DarkestSecret);}
		unsigned long	GetPhoneNumber() const {return (this->PhoneNumber);}
		void			SetFirstName(std::string FirstName);
		void			SetLastName(std::string LastName);
		void			SetNickName(std::string NickName);
		void			SetDarkestSecret(std::string DarkestSecret);
		void			SetPhoneNumber(unsigned long PhoneNumber);
};

#endif