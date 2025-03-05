#include "phonebook.hpp"

Contact::Contact(){}

Contact::~Contact(){}


inline std::string 	Contact::GetFirstName() const {return (Contact::FirstName);}

inline std::string 	Contact::GetLastName() const {return (Contact::LastName);}

inline std::string 	Contact::GetNickName() const {return (Contact::NickName);}

inline std::string 	Contact::GetDarkestSecret() const {return (Contact::DarkestSecret);}

inline unsigned long 	Contact::GetPhoneNumber() const {return (Contact::PhoneNumber);}

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
