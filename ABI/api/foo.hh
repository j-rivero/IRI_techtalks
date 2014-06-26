#ifndef API_GUARD_FOO_HH
#define API_GUARD_FOO_HH 1

#include <iostream>

namespace Foo
{
class MyLib
{
    public:
        MyLib() : a(1), b(2)
        { }
        inline void print_my_a_value();
    public:
        int a;
        int b;
};
}

#endif
