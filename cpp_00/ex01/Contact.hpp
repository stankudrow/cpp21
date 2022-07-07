#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

// the Orthodox Canonical Form is in effect since Module 02

// TODO: consider adding const keyword to getters
class	Contact
{
	public:
		Contact(void);	// constructor
		~Contact(void);	// destructor
		std::string	getFirstName(void);
		void		setFirstName(std::string firstName);
		std::string	getLastName(void);
		void		setLastName(std::string lastName);
		std::string	getNickName(void);
		void		setNickName(std::string nickName);
		std::string	getPhoneNumber(void);
		void		setPhoneNumber(std::string phoneNumber);
		std::string	getDarkSecret(void);
		void		setDarkSecret(std::string DarkSecret);
	
	private:
		std::string	firstName;
		std::string	lastName;
		std::string	nickName;
		std::string	phoneNumber;
		std::string	darkSecret;
};

#endif // CONTACT_HPP