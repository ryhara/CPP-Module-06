#include "Serializer.hpp"

Serializer::Serializer()
{
	// std::cout << "Serializer default constructor called" << std::endl;
}

Serializer::Serializer(Serializer const &copy)
{
	// std::cout << "Serializer copy constructor called" << std::endl;
	*this = copy;
}

Serializer::~Serializer()
{
	// std::cout << "Serializer destructor called" << std::endl;
}

Serializer	&Serializer::operator=(Serializer const &copy)
{
	// std::cout << "Serializer assignation operator called" << std::endl;
	(void)copy;
	return (*this);
}

uintptr_t		Serializer::serialize(Data* ptr)
{
	uintptr_t		raw;

	raw = reinterpret_cast<uintptr_t>(ptr);
	return (raw);
}

Data*			Serializer::deserialize(uintptr_t raw)
{
	Data*			ptr;

	ptr = reinterpret_cast<Data*>(raw);
	return (ptr);
}
