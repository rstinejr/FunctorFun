#ifndef FUNCTOR_HPP
#define FUNCTOR_HPP

#include <string>

namespace ffn
{
class Functor
{
public:
    Functor();
    Functor& operator() (std::string& sval);
private:
};
}
#endif
