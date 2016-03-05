#include <Functor.hpp>
#include <iostream>

using namespace ffn;

Functor::Functor()
{
}

Functor& Functor::operator() (std::string& sval)
{
    std::cout << "str is '" << sval.c_str()  << "'" << std::endl;

    return *this;
}
    
Functor& Functor::operator() (int ival)
{
    std::cout << "int is '" << ival << "'" << std::endl;

    return *this;
}
