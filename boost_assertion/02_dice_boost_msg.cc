/*
 * Code to trigger an assert on some lines generating a tabletop game dice
 * First conversion from assert to boost_assert
 * try compiling with -DBOOST_DISABLE_ASSERTS flag
 *
 * Jose Luis Rivero 
 * jrivero@osrfoundation.org
 */

#include <boost/assert.hpp>
#include <stdlib.h>
#include <iostream>

int main()
{
    srand (time(NULL));
    // bug forgeting the %7 on rand to demo the assert
    int r = rand();
    std::cout << r << std::endl;
    
    BOOST_ASSERT(r < 7);

    return 0;
}
