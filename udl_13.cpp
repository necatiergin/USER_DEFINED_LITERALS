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
    constexpr auto b = 1111_bin;

    std::cout << b << '\n';
}
