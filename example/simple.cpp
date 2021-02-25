#include <adder/adder.hpp>
#include <cstdio>

int main()
{
    int sum = adder::add(1, 2);
    std::printf("%d\n", sum);
    return 0;
}
