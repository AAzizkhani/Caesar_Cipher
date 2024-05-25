#include <iostream>
#include <map>

#ifndef SEZARCODE_HPP
#define SEZARCODE_HPP

class sezarCode
{

    private:
        std::map<int , std::string> alphabet;
        
    public:
        sezarCode(/* args */);
        ~sezarCode();
};
#endif