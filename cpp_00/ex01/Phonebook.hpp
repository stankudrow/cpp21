#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

#include <iostream>
#include <string>

class Phonebook
{
    public:
        Phonebook(void);
        ~Phonebook(void);
        void add(void);
        void search(Contact &contact);

    private:
        unsigned int    _getOldestContact(void);
        Contact _contacts[8];
};

#endif // PHONEBOOK_HPP