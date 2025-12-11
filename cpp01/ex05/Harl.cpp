#include "Harl.hpp"

Harl::Harl() {}
Harl::~Harl() {}

void Harl::debug( void )
{
    std::cout << "I love having extra bacon for my "
                    "7XL-double-cheese-triple-pickle-specialketchup burger. "
                    "I really do!" << std::endl;
}
void Harl::info( void )
{
    std::cout << "I cannot believe adding extra bacon costs more money. "
                    "You didn’t put enough bacon in my burger! If you did, "
                    "I wouldn’t be asking for more!" << std::endl;
}
void Harl::warning( void )
{
    std::cout << "I think I deserve to have some extra bacon for free. "
                    "I’ve been coming for years, whereas you started "
                    "working here just last month." << std::endl;
}
void Harl::error( void )
{
    std::cout << "This is unacceptable! I want to speak to "
                    "the manager now." << std::endl;
}

void Harl::complain( std::string level )
{
    void (Harl::*complains[]) () = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    for (int i=0; i<4; i++)
    {
        if (level.compare(levels[i])==0)
        {
            std::cout << "LEVEL " << level << std::endl;
            (this->*complains[i])();
            return;
        }
   }
    std::cout << "Incorrectly entered level!!!" << std::endl;
}


/*
Syntax (Function Pointer to Member Function):

// Define a pointer to a member function
return_type (ClassName::*pointer_name)(argument_types) = 
&ClassName::member_function;
 
//Call the member function
object-name.*pointer_name(arguments list);

[if (&arguments_types):
(object-name->*pointer_name)(arguments list);]
*/