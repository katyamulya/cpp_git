#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

class Harl
{
    private:
        enum Level { DEBUG, INFO, WARNING, ERROR, OTHERS };
        void debug( void );
        void info( void );
        void warning( void );
        void error( void );
    public:
        Harl();
        ~Harl();
        void complain( const std::string& level );
        Level convert( const std::string& level);
};

#endif