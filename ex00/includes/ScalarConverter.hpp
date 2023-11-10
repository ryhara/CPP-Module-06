#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <string>
# include <exception>
# include <iomanip>

class ScalarConverter
{
	private:
		std::string			_str;
		ScalarConverter();
	public:
		ScalarConverter(std::string str);
		ScalarConverter(ScalarConverter const & copy);
		~ScalarConverter();
		ScalarConverter	&operator=(ScalarConverter const & copy);
		void				convert(void);
};

#endif