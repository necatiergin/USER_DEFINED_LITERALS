#include <iostream>
#include <stdexcept>

struct Duration {
    int hours;
    int minutes;
    int seconds;
};

Duration operator"" _duration(const char* str, std::size_t len) {
    int h = 0, m = 0, s = 0;
    int current = 0;

    for (std::size_t i = 0; i < len; ++i) {
        if (std::isdigit(str[i])) {
            current = current * 10 + (str[i] - '0');
        }
        else {
            switch (str[i]) {
            case 'h': h = current; break;
            case 'm': m = current; break;
            case 's': s = current; break;
            default:
                throw std::invalid_argument("Unexpected character in duration literal");
            }
            current = 0; 
        }
    }

    return Duration{ h, m, s };
}



int main() 
{
    Duration d = "18h45m23s"_duration;

    std::cout << "Hours: " << d.hours
        << ", Minutes: " << d.minutes
        << ", Seconds: " << d.seconds << '\n';
}
