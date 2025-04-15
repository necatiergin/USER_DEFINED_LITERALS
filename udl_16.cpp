#include <iostream>
#include <stdexcept>

enum class Color {
    Red,
    Green,
    Blue
};

constexpr Color operator"" _color(const char* str, std::size_t) {
    return
        (str[0] == 'r') ? Color::Red :
        (str[0] == 'g') ? Color::Green :
        (str[0] == 'b') ? Color::Blue :
        throw std::invalid_argument("Unknown color");
}

int main() 
{
    constexpr Color c = "b"_color;
                        
    if (c == Color::Blue)
        std::cout << "color is blue.\n";
}
