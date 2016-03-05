#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE Functor

#include <boost/test/unit_test.hpp>

#include <Wrapper.hpp>

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

BOOST_AUTO_TEST_CASE(int_oper)
{
    Functor func;

    Functor& f2 = func(31416);

    f2(21718);

    func(31416)(21718);

    BOOST_CHECK(true);
}

BOOST_AUTO_TEST_CASE(wrapper)
{
    Wrapper wrp;

    std::string msg1("mop bop");
    std::string msg2("a loo la");

    wrp.kick_off()(msg1)(msg2)(86);

    BOOST_CHECK(true);
}
