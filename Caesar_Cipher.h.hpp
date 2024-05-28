#include <iostream>
#include <map>

#ifndef CAESARCIPHER_HPP
#define CAESARCIPHER_HPP

class CaesarCipher
{

    private:
        std::map<int , std::string> alphabet;
        
    public:
        CaesarCipher(/* args */);
        ~CaesarCipher();
};
#endif