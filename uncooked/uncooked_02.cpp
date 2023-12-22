#include <iostream>

void operator"" _pr(const char* str)
{
    std::cout << str << '\n';
}

int main()
{
    34_pr;
    56.78_pr;
    operator""_pr("3456");
}
