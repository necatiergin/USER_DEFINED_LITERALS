//cooked usef defined literals

constexpr double operator"" _c(long double fdegrees)
{
	return static_cast<double>(fdegrees);
}

constexpr double operator"" _fag(long double fdegrees)
{
	return static_cast<double>((fdegrees - 32) / 1.8);
}

int main()
{
	constexpr auto val = 50._fag - 15._c;
	constexpr auto x = operator""_fag(50.) - operator""_c(15.);
}
