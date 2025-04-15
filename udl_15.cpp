#include <string_view>

constexpr std::string_view operator"" _sv(const char* str, std::size_t len) 
{
    return std::string_view{ str, len };
}

int main()
{
    constexpr auto sw = "Jan Garbarek"_sv;
}
