#include <iostream>

namespace Hazel {
	_declspec(dllimport) void Print();
}

void main()
{
	Hazel::Print();
	std::cin.get();
}