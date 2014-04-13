/*
 * Code to trigger an assert on some lines generating a tabletop game dice
 *
 * Demostrate that with BOOST_VERIFY the fake_condition is always triggered
 * if compiling with asserts enabled or disabled.
 *
 * Jose Luis Rivero 
 * jrivero@osrfoundation.org
 */

#include <boost/assert.hpp>
#include <stdlib.h>
#include <iostream>

bool fake_condition()
{
  std::cout << "Checking condition" << std::endl;
  return false;
}

int main()
{
    srand (time(NULL));
    // bug forgeting the %7 on rand to demo the assert
    int r = rand();
    std::cout << r << std::endl;
    
    BOOST_VERIFY(fake_condition());

    return 0;
}
