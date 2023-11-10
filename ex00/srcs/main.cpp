#include "ScalarConverter.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Error: <Usage> $ ./convert number" << std::endl;
		return (1);
	}
	ScalarConverter scalarConverter(argv[1]);
	scalarConverter.convert();
	std::cout << std::endl;
	return (0);
}