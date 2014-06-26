#include "foo.hh"
#include <iostream>

void Foo::MyLib::print_my_a_value()
{
  std::cout << this->a << std::endl;
}
