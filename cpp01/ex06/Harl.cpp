#include "Harl.hpp"

Harl::Harl() {}
Harl::~Harl() {}

void Harl::debug()
{
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I love having extra bacon for my "
                    "7XL-double-cheese-triple-pickle-specialketchup burger. "
                    "I really do!\n" << std::endl;
}

void Harl::info()
{
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money. "
                    "You didn’t put enough bacon in my burger! If you did, "
                    "I wouldn’t be asking for more!\n" << std::endl;
}

void Harl::warning()
{
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free. "
                    "I’ve been coming for years, whereas you started "
                    "working here just last month.\n" << std::endl;
}

void Harl::error()
{
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to "
                    "the manager now.\n" << std::endl;
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
    // Convert the string to Enum type
    Harl::Level logLevel = convert(level);
    switch (logLevel)
    {
    case DEBUG:
        this->debug();
        // fallthrough
    case INFO:
        this->info();
        // fallthrough
    case WARNING:
        this->warning();
        // fallthrough
    case ERROR:
        this->error();
        break;
    default:
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
        break;
    }
}

/*

!!!!!!!!!!!!!

Include the // fallthrough comments in your switch block. 
If you are compiling with -Wextra or -Wall, the compiler 
might complain that you "forgot" a break unless you 
add those comments to prove it was on purpose! 
*/


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