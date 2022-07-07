#include "Contact.hpp"

Contact::Contact(void) {return ;}

Contact::~Contact(void) {return ;}

std::string	Contact::getFirstName(void)
{
	return this->firstName;
}

void	Contact::setFirstName(std::string firstName)
{
	this->firstName = firstName;
}

std::string	Contact::getLastName(void)
{
	return this->lastName;
}

void	Contact::setLastName(std::string lastName)
{
	this->lastName = lastName;
}

std::string	Contact::getNickName(void)
{
	return this->nickName;
}

void	Contact::setNickName(std::string nickName)
{
	this->nickName = nickName;
}

std::string	Contact::getPhoneNumber(void)
{
	return this->phoneNumber;
}

void	Contact::setPhoneNumber(std::string phoneNumber)
{
	this->phoneNumber = phoneNumber;
}

std::string	Contact::getDarkSecret(void)
{
	return this->darkSecret;
}

void	Contact::setDarkSecret(std::string darkSecret)
{
	this->darkSecret = darkSecret;
}
