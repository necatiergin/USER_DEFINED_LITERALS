
constexpr double operator""_m(long double val)
{
	return static_cast<double>(val);
}

constexpr double operator"" _cm(long double val)
{
	return static_cast<double>(val / 100);
}

constexpr double operator"" _mm(long double val)
{
	return static_cast<double>(val / 1000);
}

constexpr double operator"" _km(long double val)
{
	return static_cast<double>(val * 1000);
}

int main()
{
	constexpr double length = 2.3_km + 34.98_m + 54312._cm + 123456._mm;
	
	//...
}
