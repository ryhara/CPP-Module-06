#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
	// std::cout << "ScalarConverter Default constructor called" << std::endl;
}

ScalarConverter::ScalarConverter(std::string str) : _str(str)
{
	// std::cout << "ScalarConverter constructor called" << std::endl;
}

ScalarConverter::ScalarConverter(ScalarConverter const & copy)
{
	// std::cout << "ScalarConverter Copy constructor called" << std::endl;
	*this = copy;
}

ScalarConverter::~ScalarConverter()
{
	// std::cout << "ScalarConverter Destructor called" << std::endl;
}

ScalarConverter	&ScalarConverter::operator=(ScalarConverter const & copy)
{
	// std::cout << "ScalarConverter Assignation operator called" << std::endl;
	if (this != &copy)
	{
		this->_str = copy._str;
	}
	return (*this);
}

void ScalarConverter::convert(void)
{
	std::cout << "char: ";
	try
	{
		char c = static_cast<char>(std::stoi(this->_str));
		if (c < 32 || c > 126)
			std::cout << "Non displayable" << std::endl;
		else
			std::cout << "'" << c << "'" << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "impossible" << std::endl;
	}
	std::cout << "int: ";
	try
	{
		int i = static_cast<int>(std::stoi(this->_str));
		std::cout << i << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "impossible" << std::endl;
	}
	std::cout << "float: ";
	try
	{
		float f = static_cast<float>(std::stof(this->_str));
		std::cout << std::fixed << std::setprecision(1) << f << "f" << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "impossible" << std::endl;
	}
	std::cout << "double: ";
	try
	{
		double d = static_cast<double>(std::stod(this->_str));
		std::cout << std::fixed << std::setprecision(1) << d << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "impossible" << std::endl;
	}
}

