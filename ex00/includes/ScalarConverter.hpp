#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <string>
# include <exception>
# include <iomanip>

class ScalarConverter
{
	private:
		ScalarConverter();
		ScalarConverter(ScalarConverter const & copy);
		~ScalarConverter();
		ScalarConverter	&operator=(ScalarConverter const & copy);
	public:
		static void				convert(std::string str);
};

#endif