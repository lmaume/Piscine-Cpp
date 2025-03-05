#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include <iostream>
#include <cctype>
#include <limits.h>
#include "Contact.hpp"
class PhoneBook
{
	private:
		Contact _ContactTab[8];
	public:
		Contact GetContact(int id);
		void SetContactFirstName(int id, std::string Name);
		void SetContactLastName(int id, std::string Name);
		void SetContactNickName(int id, std::string Name);
		void SetContactDarkestSecret(int id, std::string Name);
		void SetContactPhoneNumber(int id, int PhoneNumber);
};

#endif