#ifndef CONTACT_H
# define CONTACT_H

#include <iostream>
#include <cctype>
#include <cstdlib>
#include <limits.h>

class Contact
{
	private:
		std::string		_FirstName;	
		std::string		_LastName;
		std::string		_NickName;
		std::string		_DarkestSecret;
		std::string		_PhoneNumber;
	public:
		std::string		GetFirstName() const;
		std::string		GetLastName() const;
		std::string		GetNickName() const;
		std::string		GetDarkestSecret() const;
		std::string		GetPhoneNumber() const;

		void			SetFirstName(std::string FirstName);
		void			SetLastName(std::string LastName);
		void			SetNickName(std::string NickName);
		void			SetDarkestSecret(std::string DarkestSecret);
		void			SetPhoneNumber(std::string PhoneNumber);
		void			ClearContact();
		Contact(void);
		~Contact(void);
	};

#endif