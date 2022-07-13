#include "Phonebook.hpp"

Phonebook::Phonebook(void) {return ;}

Phonebook::~Phonebook(void) {return ;}

void Phonebook::add(void)
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
