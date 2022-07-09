#include "Contact.hpp"
#include "Phonebook.hpp"
#include <iostream>
#include <string>

// https://people.canonical.com/~msawicz/guides/c++/cppguide.html
// https://web.engr.oregonstate.edu/~budd/Books/cforj/info/slides/Chapter5/tsld034.htm
// https://cplusplus.com/reference/string/string/getline/

// the dynamic allocation is forbidden
static void	usage(void)
{
    std::cout << "$ ./Phonebook  # run the program" << std::endl;
    std::cout << "The program waits for the following commands:" << std::endl;
    std::cout << "    ADD  # a contact to the phone book." << std::endl;
    std::cout << "    SEARCH  # a contact in the phone book." << std::endl;
    std::cout << "    EXIT  # and have lost all contacts." << std::endl;
    std::cout << "The phone book can hold only 8 contacts." << std::endl;
    std::cout << "A 9th contact should replace the oldest one." << std::endl;
    std::cout << std::endl;
}

int	main(void)
{
    Phonebook	phoneBook;
    std::string	command;

    usage();
    phoneBook = Phonebook::Phonebook(8);
    while (true)
    {
        // MacOS: no delim parametre
        std::getline(std::cin, command);
        for (std::size_t i = 0; i < command.length(); ++i)
            command[i] = std::toupper(command[i]);
        if (command == "EXIT")
            break ;
        else if (command == "SEARCH")
            phoneBook.search();
        else if (command == "ADD")
            phoneBook.add();
        else
            std::cout << "Unrecognised command " << command << std::endl;
    }
    return (0);
}
