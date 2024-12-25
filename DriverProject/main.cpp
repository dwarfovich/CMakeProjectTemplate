#include "lib1/lib1.hpp"
#include "shared_lib/shared_lib.hpp"

#include <boost/lexical_cast.hpp>

#include <iostream>

int main()
{
	std::cout << "Hello, CMake!\n";
    std::cout << "Hello, " << lib1Func() << '\n';
    std::cout << "Hello, " << sharedLibFunc() << '\n';
    std::cout << "Lexical cast: " << boost::lexical_cast<int>("123") << '\n';

	return 0;
}
