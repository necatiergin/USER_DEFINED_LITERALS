class Kilogram {
public:
	class prevent_usage{};
	constexpr Kilogram(prevent_usage, double value) : mweight(value) {}
	
	friend constexpr Kilogram operator+(const Kilogram& x, const Kilogram& y)
	{
		return Kilogram{ Kilogram::prevent_usage{}, x.mweight + y.mweight };
	}
private:
	double mweight;
};

constexpr Kilogram operator""_kg(long double val)
{
	return Kilogram{ Kilogram::prevent_usage{}, static_cast<double>(val) };
}

constexpr Kilogram operator""_g(long double val)
{
	return Kilogram{ Kilogram::prevent_usage{}, static_cast<double>(val) / 1000. };
}


int main()
{
	constexpr Kilogram x = 12.5_kg + 23212._g;
}
