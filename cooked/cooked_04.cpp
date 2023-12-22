#include <iostream>
#include "date.h"

Date operator""_dt(const char *p, size_t)
{
	return Date{ p };
}

using namespace std;

int main()
{
	cout << "11/05/1987"_dt;
}
