#include <iostream>

constexpr int operator"" _i(char c)
{
    return c;
}

int main()
{
    std::cout << 'A'_i << '\n'_i << '+'_i;
}
