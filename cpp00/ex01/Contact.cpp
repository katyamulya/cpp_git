#include "Contact.hpp"
//#include <iostream>

        Contact::Contact(){}  //default contructor
        //parameterized constructor:
        Contact::Contact(std::string fn, std::string ln, std::string nn,
                std::string number, std::string secret)
        {
            firstName = fn;
            lastName = ln;
            nickName = nn;
            phoneNumber = number;
            darkestSecret = secret;
        }

        std::string Contact::getFirstName() {return firstName;}
        std::string Contact::getLastName() {return lastName;}
        std::string Contact::getNickName() {return nickName;}
        std::string Contact::getPhoneNumber() {return phoneNumber;}

        bool Contact::isEmpty(Contact contact)
        {
            if(contact.firstName.empty() || contact.lastName.empty() || contact.nickName.empty()
                || contact.phoneNumber.empty() || contact.darkestSecret.empty())
                return false;
            return true;
        }