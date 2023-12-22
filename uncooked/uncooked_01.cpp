#include <iostream>

unsigned int operator"" _b(const char* p)
{
	unsigned uval = 0;

	while (*p) {
		char digit = *p;
		if (digit != '1' && digit != '0') {
			throw std::runtime_error("0 ya da 1 olmayan karakter\n");
		}

		uval = uval * 2 + (digit - '0');
		++p;
	}

	return uval;
}


int main() try
{
	unsigned uval1 = 101_b;

	std::cout << "uval1 = " << uval1 << '\n';

	unsigned uval2 = 124_b; //exception gonderecek
	std::cout << "uval2 = " << uval1 << '\n';
}
catch (const std::exception& e)
{
	std::cerr << "hata yakalandi: " << e.what() << "\n";
}
