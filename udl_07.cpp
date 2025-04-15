#include <iostream>
#include <string>

std::string operator"" _s2(const char* str, std::size_t)
{
    return std::string{ str } + str;
}

std::string operator"" _s3(const char* str, std::size_t)
{
    return std::string{ str } + str + str;
}

std::string operator"" _s4(const char* str, std::size_t)
{
    return std::string{ str } + str + str + str;
}

int main()
{
    std::cout << "necati"_s2 << '\n';
    std::cout << "necati"_s3 << '\n';
    std::cout << "necati"_s4 << '\n';

}
