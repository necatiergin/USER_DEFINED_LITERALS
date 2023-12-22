#include <numbers>
#include <iostream>

constexpr long double operator"" _deg_to_rad(long double deg)
{
    long double radians = deg * std::numbers::pi_v<long double> / 180;
    return radians;
}

int main()
{
    constexpr auto rad = 180._deg_to_rad;

    std::cout << "rad = " << rad << "\n";
}
