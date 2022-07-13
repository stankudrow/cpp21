#include "Utils.hpp"

// https://stackoverflow.com/questions/2251433/checking-for-eof-in-stringgetline
void readLine(std::string &str)
{
    std::getline(std::cin, str);
    if ((std::cin.fail()) || (!std::cin.eof()))
        throw std::ios_base::failure(std::strerror(errno));
}

bool isPhoneNumberLike(const std::string &str)
{
    // for, e. g., +4221 or 4221 "internal" numbers
    if (str.length() < 5)
        return false;
    // if + -> pass
    // then checking on digits only + the end of the string
    return true;
}