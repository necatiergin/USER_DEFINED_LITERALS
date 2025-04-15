#include <iostream>
#include "date.h"

Date operator""_dt(const char* p, size_t)
{
	return Date{ p };
}

int main()
{
	std::cout << "11/05/1987"_dt;
	std::cout<< '\n' << operator""_dt("23/09/1998", 10);
}
