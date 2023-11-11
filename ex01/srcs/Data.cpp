#include "Data.hpp"

Data::Data() : s1(""), n(0)
{
	// std::cout << "Data default constructor called" << std::endl;
}

Data::Data(std::string const s1, int n) : s1(s1), n(n)
{
	// std::cout << "Data constructor called" << std::endl;
}
