#include "Phonebook.hpp"

Phonebook::Phonebook(void) {return ;}

Phonebook::~Phonebook(void) {return ;}

// https://stackoverflow.com/questions/2251433/checking-for-eof-in-stringgetline
static void readLine(std::string &str)
{
    std::string line;

    std::getline(std::cin, line);
    if (std::cin.fail())
        throw // io exception
    else if (!std::cin.eof())
        // format error ????
    else
        // some error happened anyway ????
    str = line;
}

static bool isPhoneNumberLike(const std::string &str)
{
    // for, e. g., +4221 or 4221 "internal" numbers
    if (str.length() < 5)
        return false;
    // if + -> pass
    // then checking on digits only + the end of the string
}

void    Phonebook::add(void)
{
    std::string field = "";
    Contact     contact = Contact();

    std::cout << "The first name: ";
    readLine(field);
    if (field.empty())
        return ;
    contact.setFirstName(field);

    std::cout << "The last name: ";
    readLine(field);
    if (field.empty())
        return ;
    contact.setLastName(field);

    std::cout << "The nick name: ";
    readLine(field);
    if (field.empty())
        return ;
    contact.setNickName(field);

    std::cout << "The phone number: ";
    readLine(field);
    if (field.empty())
        return ;
    if (!isPhoneNumberLike(field))
        return ;
    contact.setPhoneNumber(field);

    std::cout << "The dark secret: ";
    readLine(field);
    if (field.empty())
        return ;
    contact.setDarkSecret(field);

    this->_contacts[this->_getOldestContact()] = contact;
}
