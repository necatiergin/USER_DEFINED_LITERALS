#include <iostream>

template<char... Chars>
constexpr unsigned operator"" _bin() 
{
    constexpr char str[] = { Chars..., '\0' };
    unsigned int value = 0;
    for (char c : str) {
        if (c == '1')
            value = value * 2 + 1;
    }
    return value;
}

int main() 
{
    constexpr auto b = 1010011_bin;
}
