#include "Harl.hpp"

Harl::Harl() {}
Harl::~Harl() {}

void Harl::debug( void )
{
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I love having extra bacon for my "
                    "7XL-double-cheese-triple-pickle-specialketchup burger. "
                    "I really do!" << std::endl;
}
void Harl::info( void )
{
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money. "
                    "You didn’t put enough bacon in my burger! If you did, "
                    "I wouldn’t be asking for more!" << std::endl;
}
void Harl::warning( void )
{
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free. "
                    "I’ve been coming for years, whereas you started "
                    "working here just last month." << std::endl;
}
void Harl::error( void )
{
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to "
                    "the manager now." << std::endl;
}

Harl::Level Harl::convert(const std::string& level)
{
    if(level == "DEBUG") return DEBUG;
    else if (level == "INFO") return INFO;
    else if (level == "WARNING") return WARNING;
    else if (level == "ERROR") return ERROR;
    else return OTHERS;
}

void Harl::complain( const std::string& level )
{
    Harl::Level logLevel = convert(level);
    switch (logLevel)
    {
    case DEBUG:
        Harl::debug();
    case INFO:
        Harl::info();
    case WARNING:
        Harl::warning();
    case ERROR:
        Harl::error();
        break;
    default:
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
        break;
    }
}


/*
switch(expression) 
{
  case x:
    // code block
    break;
  case y:
    // code block
    break;
  default:
    // code block
}
*/