#include "Contact.hpp"

Contact::Contact(void) {return ;}

Contact::~Contact(void) {return ;}

bool    operator==(const Contact & c1, const Contact & c2)
{
    if (c1.getFirstName() != c2.getFirstName())
        return false;
    if (c1.getLastName() != c2.getLastName())
        return false;
    if (c1.getNickName() != c2.getNickName())
        return false;
    if (c1.getPhoneNumber() != c2.getPhoneNumber())
        return false;
    if (c1.getDarkSecret() != c2.getDarkSecret())
        return false;
    return true;
}

std::string Contact::getFirstName(void) const
{
    return this->firstName;
}

void    Contact::setFirstName(std::string firstName)
{
    this->firstName = firstName;
}

std::string Contact::getLastName(void) const
{
    return this->lastName;
}

void    Contact::setLastName(std::string lastName)
{
    this->lastName = lastName;
}

std::string Contact::getNickName(void) const
{
    return this->nickName;
}

void    Contact::setNickName(std::string nickName)
{
    this->nickName = nickName;
}

std::string Contact::getPhoneNumber(void) const
{
    return this->phoneNumber;
}

void    Contact::setPhoneNumber(std::string phoneNumber)
{
    this->phoneNumber = phoneNumber;
}

std::string Contact::getDarkSecret(void) const
{
    return this->darkSecret;
}

void    Contact::setDarkSecret(std::string darkSecret)
{
    this->darkSecret = darkSecret;
}
