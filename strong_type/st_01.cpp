#include <ostream>

class Meters
{
    double mts;
public:
    class PreventUsage {};
    explicit constexpr Meters(PreventUsage, double meter) : mts{ meter } {}
    explicit constexpr operator double()const { return mts; }
};

constexpr Meters operator""_m(long double m){
    return Meters(Meters::PreventUsage(), static_cast<double>(m));
}

std::ostream& operator<<(std::ostream& os, const Meters& m)
{
    return os << static_cast<double>(m) << " meters";
}

#include <iostream>

int main()
{
    Meters m = 2.3_m;

    m = 2.5_m;

    std::cout << m << "\n";
}
