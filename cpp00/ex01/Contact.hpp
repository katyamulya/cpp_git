#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact
{
    private:
        std::string firstName;
        std::string lastName;
        std::string nickName;
        std::string phoneNumber;
        std::string darkestSecret;

    public:
        Contact();  //default contructor
        //parameterized constructor:
        Contact(std::string fn, std::string ln, std::string nn,
                std::string number, std::string secret);

        std::string getFirstName();
        std::string getLastName();
        std::string getNickName();
        std::string getPhoneNumber();

        bool isEmpty(Contact contact);
};


#endif