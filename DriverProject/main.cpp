#include "lib1/lib1.hpp"
#include "shared_lib/shared_lib.hpp"

#include <iostream>

int main()
{
	std::cout << "Hello, CMake!\n";
    std::cout << "Hello, " << lib1Func() << '\n';
    std::cout << "Hello, " << sharedLibFunc() << '\n';

	return 0;
}
