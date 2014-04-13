/*
 * Code to trigger an assert on some lines generating a tabletop game dice
 * First conversion from assert to boost_assert
 *  - Implement the assert handler
 *  Remember to compile to -DBOOST_ENABLE_ASSERT_HANDLER 
 *
 * Jose Luis Rivero 
 * jrivero@osrfoundation.org
 */

#include <boost/assert.hpp>
#include <stdlib.h>
#include <iostream>

namespace boost
{
  void assertion_failed_msg(char const * expr, char const * msg, char const * function, 
                            char const * file, long line)
  {
    std::cerr << "It was en error: " << msg << " but I don't want the program to abort" << std::endl;
  }
}

int main()
{
    srand (time(NULL));
    // bug forgeting the %7 on rand to demo the assert
    int r = rand();
    std::cout << r << std::endl;
    
    BOOST_ASSERT_MSG(r < 7, "Value out of range");
    std::cout << "end" << std::endl;

    return 0;
}
