#include "Zombie.hpp"

int main()
{
    Zombie* zombie = newZombie("ZombieFromHeap");
    zombie->announce();
    
    randomChump("ZombieFromStack");

    delete zombie;
    //zombie->~Zombie();
    /*
    the destructor isn’t called it’s invoked when the object goes out of scope.
    the keyword "delete" is usually used to deallocate memory allocated dynamically (with the word new).
    */
    return 0;
}

/*
On the stack, allocation is just one CPU instruction. Whereas on the heap(*), it's a heavier operation. 
So a small tip, you should always try to allocate on the stack whenever possible because it's faster. 
When you allocate memory on the heap, you usually have a pointer on the stack that points to that memory.

***

Use the stack when your variable will not be used after the current function returns. 
Use the heap when the data in the variable is needed beyond the lifetime of the current function.

***

As a rule of thumb, avoid creating huge objects on the stack.

Creating an object on the stack frees you from the burden of remembering to cleanup(read delete) the object. 
But creating too many objects on the stack will increase the chances of stack overflow.
If you use heap for the object, you get the as much memory the OS can provide, much larger than the stack, 
but then again you must make sure to free the memory when you are done. Also, creating too many objects 
too frequently in the heap will tend to fragment the memory, which in turn will affect the performance of your application.
*/