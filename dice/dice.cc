#include <assert.h>
#include <stdlib.h>
#include <iostream>

int main()
{
    srand (time(NULL));
    int r = rand();
    std::cout << r << std::endl;
    
    assert(r < 7);

    return 0;
}
