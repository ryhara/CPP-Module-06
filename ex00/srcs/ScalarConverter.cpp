#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
	// std::cout << "ScalarConverter Default constructor called" << std::endl;
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
	(void)copy;
	return (*this);
}

void ScalarConverter::convert(std::string str)
{
	std::cout << "char: ";
	try
	{
		char c = static_cast<char>(std::stoi(str));
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
		int i = static_cast<int>(std::stoi(str));
		std::cout << i << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "impossible" << std::endl;
	}

	std::size_t pos = str.find('.');
	std::size_t f_pos = str.find('f');
	int precision = ((std::string::npos == pos) ? 1 : str.size() - pos - 1);
	precision = ((std::string::npos == f_pos) ? precision : precision - 1);
	
	std::cout << "float: ";
	try
	{
		float f = static_cast<float>(std::stof(str));
		int f_precision = (std::numeric_limits<float>::max_digits10 < precision ? std::numeric_limits<float>::max_digits10 : precision);
		std::cout << std::fixed << std::setprecision(f_precision) << f << "f" << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "impossible" << std::endl;
	}
	std::cout << "double: ";
	try
	{
		double d = static_cast<double>(std::stod(str));
		int d_precision = (std::numeric_limits<double>::max_digits10 < precision ? std::numeric_limits<double>::max_digits10 : precision);
		std::cout << std::fixed << std::setprecision(d_precision) << d << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "impossible" << std::endl;
	}
}

