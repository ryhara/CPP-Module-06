#include "Data.hpp"
#include "Serializer.hpp"

int main(void)
{
	Data*			data;
	uintptr_t		raw;
	Data*			ptr;

	data = new Data("Hello", 42);
	std::cout << "-- original data --" << std::endl;
	std::cout << "data: " << data << std::endl;
	std::cout << "s1: " << data->s1 << std::endl;
	std::cout << "n: " << data->n << std::endl;
	raw = Serializer::serialize(data);
	std::cout << "-- serialized data --" << std::endl;
	std::cout << "raw: " << raw << std::endl;
	ptr = Serializer::deserialize(raw);
	std::cout << "-- deserialized data --" << std::endl;
	std::cout << "ptr: " << ptr << std::endl;
	std::cout << "s1: " << ptr->s1 << std::endl;
	std::cout << "n: " << ptr->n << std::endl;
	delete data;
	return (0);
}