#include <vector>
#include <iostream>

int main()
{
    std::vector<int> v(4);
    v.push_back(32);

    for (std::vector<int>::iterator ci = v.begin(); ci != v.end(); ci++)
    {
        std::cout << *ci << std::endl;
    }

    for (auto ci : v)
        std::cout << ci << std::endl;

    return 0;
}
    
