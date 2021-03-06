#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

// the Orthodox Canonical Form is in effect since Module 02

// TODO: consider adding const keyword to getters
class	Contact
{
    public:
        Contact(void);
        ~Contact(void);
        std::string getFirstName(void) const;
        void        setFirstName(std::string firstName);
        std::string getLastName(void) const;
        void        setLastName(std::string lastName);
        std::string getNickName(void) const;
        void        setNickName(std::string nickName);
        std::string getPhoneNumber(void) const;
        void        setPhoneNumber(std::string phoneNumber);
        std::string getDarkSecret(void) const;
        void        setDarkSecret(std::string DarkSecret);

    private:
        std::string	firstName;
        std::string	lastName;
        std::string	nickName;
        std::string	phoneNumber;
        std::string	darkSecret;
};

#endif // CONTACT_HPP