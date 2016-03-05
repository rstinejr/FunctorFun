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
