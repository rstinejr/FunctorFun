#include <Wrapper.hpp>
#include <iostream>

int main(int c, char** args)
{
    std::cout << "Let the Functor Fun begin!" << std::endl;

    ffn::Wrapper wrapper;

    std::string msg("hello world");

    wrapper.kick_off()(msg)(31416);

    std::cout << "Done." << std::endl;

    return 0;
}
