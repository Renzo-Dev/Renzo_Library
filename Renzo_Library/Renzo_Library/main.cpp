#include "string.h"

using namespace renzo;

int main()
{
	string s("awdwad");

	std::cout << renzo::strlen(s.c_str());
	
	return 0;
}