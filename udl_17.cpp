#include <string>
#include <algorithm>
#include <iostream>

std::string operator""_rs(const char* p, std::size_t)
{
	std::string ret{ p };
	std::reverse(ret.begin(), ret.end());

	return ret;
}

int main()
{
	std::cout << "alican"_rs << '\n';
}
