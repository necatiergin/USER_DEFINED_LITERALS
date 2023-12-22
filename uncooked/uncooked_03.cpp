#include <string>
#include <iostream>
#include <algorithm>

//uncooked literal operator

std::string operator""_str(const char* p)
{
	return p;
}


int main()
{
	auto s = 45.678_str;
	std::cout << s << '\n';
	reverse(s.begin(), s.end());
	std::cout << s << '\n';
}
