/*
 * Code to trigger an assert on some lines generating a tabletop game dice
 *
 * Jose Luis Rivero 
 * jrivero@osrfoundation.org
 */

#include <assert.h>
#include <stdlib.h>
#include <iostream>

int main()
{
    srand (time(NULL));
    // bug forgeting the %7 on rand to demo the assert
    int r = rand();
    std::cout << r << std::endl;
    
    assert(r < 7);

    return 0;
}
