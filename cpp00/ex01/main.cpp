#include <iostream>
#include <limits>
#include "PhoneBook.hpp"

int main()
{
    PhoneBook phoneBook;
    std::string command;

    std::cout << "Welcome to  My Awesome PhoneBook!" << std::endl;
    while (true)
    {
        std::cout << "Enter a command (ADD, SEARCH, EXIT) : ";
        std::cin >> command;
        if (command == "EXIT")
        {
            exit(0);
        }
        else if (command == "ADD")
        {
            std::string firstName;
            std::string lastName;
            std::string nickName;
            std::string phoneNumber;
            std::string darkestSecret;

            std::cout << "First Name: ";
            std::cin >> firstName;
            std::cout << "Last Name: ";
            std::cin >> lastName;
            std::cout << "Nickname: ";
            std::cin >> nickName;
            std::cout << "Phone Number: ";
            std::cin >> phoneNumber;
            std::cout << "Darkest Secret: ";
            std::cin >> darkestSecret;

            Contact contact(firstName, lastName, nickName, phoneNumber, darkestSecret);
            if(!contact.isEmpty(contact))
                std::cout << "An entered contact can't have empty fields. Please try again." << std::endl;
            else
                phoneBook.addContact(contact);
        }
        else if (command == "SEARCH")
        {
            int index;
            phoneBook.printContacts();
            while (std::cout << "Enter an index: " && !(std::cin >> index)) 
            {
                std::cin.clear(); //clear bad input flag
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //discard input
                //std::streamsize - Type to represent sizes and character counts in streams.
                std::cout << "Invalid input. Please re-enter." << std::endl;
            }
            phoneBook.searchContact(index);
        }
        else
        {
            std::cout << "Invalid command. Please retry." <<std::endl;
        }
    }
    return 0;
}