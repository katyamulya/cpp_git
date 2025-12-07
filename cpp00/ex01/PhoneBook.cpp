#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    count = 0;
    oldestIndex = 0;
}
void PhoneBook::addContact(Contact contact)
{
    if (count < 8)
    {
        contacts[count] = contact;
        count++;
    }
    else //if (count == 8)
    {
        contacts[oldestIndex] = contact;
        if (oldestIndex < 7)
            oldestIndex++;
        else
            oldestIndex = 0;
    }
}
void PhoneBook::printLine()
{
    for(int i=0; i<45; i++)
    {
        std::cout << "_";
    }
    std::cout << std::endl;
}
std::string PhoneBook::truncateStr(std::string str)
{
    if(str.length() > 10)
        return (str.substr(0,9) + "."); //9 not included
    return str;
}
void PhoneBook::printContacts()
{
    printLine();
    std::cout << "|" << std::setw(10) << std::right << "INDEX" << "|"; 
    std::cout << std::setw(10) <<std::right << "FIRST NAME" << "|";
    std::cout << std::setw(10) <<std::right << "LAST NAME" << "|";
    std::cout << std::setw(10) <<std::right << "NICKNAME" << "|" << std::endl;
    printLine();
    for(int i=0; i<count; i++)
    {
        std::cout << "|" << std::setw(10) << std::right << (i+1) << "|";
        std::cout << std::setw(10) << std::right << truncateStr(contacts[i].getFirstName()) <<"|";
        std::cout << std::setw(10) << std::right << truncateStr(contacts[i].getLastName()) <<"|";
        std::cout << std::setw(10) << std::right << truncateStr(contacts[i].getNickName()) <<"|" << std::endl;
        printLine();
    }
}
void PhoneBook::searchContact(int index)
{
    if ((index - 1) < 0 || (index - 1) >= count)
    {
        std::cout << "No data found with this index." << std::endl;
        return;
    }
    std::cout << "First Name:   " << contacts[index -1].getFirstName() << std::endl;
    std::cout << "Last Name:    " << contacts[index - 1].getLastName() << std::endl;
    std::cout << "Nickname:     " << contacts[index - 1].getNickName() << std::endl;
    std::cout << "Phone Number: " << contacts[index - 1].getPhoneNumber() << std::endl;
}

