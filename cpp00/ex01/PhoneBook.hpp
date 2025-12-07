#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include "Contact.hpp"

class PhoneBook
{
    private:
        Contact contacts[8];
        int count;
        int oldestIndex;
    public:
        PhoneBook();
        void addContact(Contact contact);
        void printLine();
        std::string truncateStr(std::string str);
        void printContacts();
        void searchContact(int index);
};

#endif