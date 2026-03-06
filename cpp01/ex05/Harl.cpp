#include "Harl.hpp"

Harl::Harl() {}
Harl::~Harl() {}

void Harl::debug()
{
    std::cout << "I love having extra bacon for my "
                    "7XL-double-cheese-triple-pickle-specialketchup burger. "
                    "I really do!" << std::endl;
}

void Harl::info()
{
    std::cout << "I cannot believe adding extra bacon costs more money. "
                    "You didn’t put enough bacon in my burger! If you did, "
                    "I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning()
{
    std::cout << "I think I deserve to have some extra bacon for free. "
                    "I’ve been coming for years, whereas you started "
                    "working here just last month." << std::endl;
}

void Harl::error()
{
    std::cout << "This is unacceptable! I want to speak to "
                    "the manager now." << std::endl;
}

void Harl::complain( std::string level )
{
    //Definition: (ClassName::*PointerName)(Parameters)
    void (Harl::*complains[]) () = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    for (int i = 0; i < 4; i++)
    {
        if (level == levels[i])
        {
            //std::cout << level << std::endl;
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

/*
1. The Syntax Breakdown:
// 1. Definition: (ClassName::*PointerName)(Parameters)
void (Harl::*complains[])() = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };

void: The return type of the functions.
(Harl::*): This tells the compiler "these pointers belong to the Harl class."
complains[]: The name of your array.
(): The parameter list (empty in this case).
&Harl::debug: You must use the & and the full class name to get the address.

2. Calling the Function
Because these functions aren't "static," they need to know which object 
they are operating on. In C++, we use the .* or ->* operators.
Inside your class (where this is available):
cpp
(this->*complains[i])();
Use code with caution.

this: The pointer to the current object.
->*: The "Pointer-to-Member" dereference operator.
complains[i]: The specific function address from your array.
(): Actually executes the function.
3. Why use them?
Efficiency: It replaces a slow if/else if/else chain with a direct jump 
to the correct code.
Clean Code: It separates the "selection" logic (the loop) 
from the "execution" logic.
Dynamic behavior: You can change which function is called 
at runtime simply by changing an index.

*/