#include "Base.hpp"

int main(void)
{
	std::cout << "-- random --" << std::endl;
	Base*	base = generate();
	identify(base);
	identify(*base);
	delete base;
	std::cout << "-- Base --" << std::endl;
	Base* base2 = new Base();
	identify(base2);
	identify(*base2);
	delete base2;
	return (0);
}