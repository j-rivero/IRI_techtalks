#include <iostream>
#include <stdlib.h>
#include <assert.h>

#include <vector>

void print_a_number_lower_than_five(const int number)
{
    assert(number < 5);
    std::cout << "My number lower than five: " << number << std::endl;
    return;
}

class Robot
{
    public:
        template <class T>
        void run_distance(const T distance)
        {
            static_assert(std::is_integral<T>::value, "Aaaah no floating points");
            _d = distance;
        }

    private:
        double _d;
};

class MyVectorPrinter
{
    public:
        static const void print_first_four(const std::vector<int> input)
        {
            std::cout << input.size() << std::endl;

            std::cout << input[0] << std::endl;
            std::cout << input[1] << std::endl;
            std::cout << input[2] << std::endl;
            std::cout << input[3] << std::endl;
        }
};

template<class T, int S>
class MyLongVector : public std::vector<T>
{
    static_assert(S >= 4, "Vector too small");

    static const void print_first_four(const std::vector<int> input)
        {
            std::cout << input.size() << std::endl;

            std::cout << input[0] << std::endl;
            std::cout << input[1] << std::endl;
            std::cout << input[2] << std::endl;
            std::cout << input[3] << std::endl;
        }
};


int main()
{
    /*
    srand(time(NULL));
    int number = rand() % 10;
    print_a_number_lower_than_five(number);
    */

    Robot r;
    r.run_distance<int>(100);

    MyVectorPrinter printer;
    // std::vector<int> v;
    MyLongVector<int, 3> v;
    v.push_back(2);
    // printer.print_first_four(v);

    return 1;
}
