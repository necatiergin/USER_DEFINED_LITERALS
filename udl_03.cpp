//cooked user defined literals

#include <array>

namespace Nec
{
	constexpr std::size_t operator "" _KB(unsigned long long size)
	{
		return static_cast<std::size_t>(size * 1024);
	}

	constexpr std::size_t operator "" _MB(unsigned long long size)
	{
		return static_cast<std::size_t>(size * 1024 * 1024);
	}
}


int main()
{
	using namespace Nec;

	auto size{ 4_KB };         // std::size_t size = 4096; 

	using byte = unsigned char;
	auto buf1 = std::array<byte, 16_KB>{};
	auto buf2 = std::array<byte, 1_MB>{};
}
