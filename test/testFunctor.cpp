#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE Functor

#include <boost/test/unit_test.hpp>

#include <Functor.hpp>

using namespace ffn;

BOOST_AUTO_TEST_CASE(ctor_dtor)
{
    {
        Functor func;
    }

    BOOST_CHECK(true);
}

BOOST_AUTO_TEST_CASE(str_oper)
{
    Functor func;
    std::string msg1("hello"),
                msg2("world");

    Functor& f2 = func(msg1);

    f2(msg2);

    func(msg1)(msg2);

    BOOST_CHECK(true);
}
