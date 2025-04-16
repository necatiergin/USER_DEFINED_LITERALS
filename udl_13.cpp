#include <iostream>


template<char... Chars>
constexpr unsigned operator"" _bin()
{
    constexpr char str[] = { Chars..., '\0' };
    unsigned int value = 0;
    for (int i = 0; str[i] != '\0'; ++i) {
        value = value * 2 + str[i] - '0';
    }
    return value;
}

int main()
{
    constexpr auto b1 = 1111_bin;

    constexpr auto b2 = operator""_bin<'1', '0', '1', '0'>();
    
    std::cout << b1 << '\n';
    std::cout << b2 << '\n';
}
