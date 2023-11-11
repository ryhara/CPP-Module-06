#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base*	generate(void)
{
	std::srand(std::time(NULL));
	int	random = std::rand() % 3;
	switch (random)
	{
		case 0:
			return (new A());
		case 1:
			return (new B());
		case 2:
			return (new C());
		default:
			return (NULL);
	}
}

void	identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
	else
		std::cout << "Base" << std::endl;
}

template <typename T>
bool isCastableReference(Base &p)
{
	try{
		T&	t = dynamic_cast<T&>(p);
		(void)t;
		return (true);
	}
	catch (std::exception& e)
	{
		return (false);
	}
}

void	identify(Base& p)
{
	if (isCastableReference<A>(p))
		std::cout << "A" << std::endl;
	else if (isCastableReference<B>(p))
		std::cout << "B" << std::endl;
	else if (isCastableReference<C>(p))
		std::cout << "C" << std::endl;
	else
		std::cout << "Base" << std::endl;
}
