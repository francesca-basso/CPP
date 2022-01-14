#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *generate(void)
{
	Base *to_ret;

	srand(time(NULL));
	int decision_maker = rand() % 3;
	if (decision_maker == 0)
		to_ret = new A();
	else if (decision_maker == 1)
		to_ret = new B();
	else
		to_ret = new C();
	return (to_ret);
}

void identify(Base* p)
{
	// std::cout << "identify with pointers\n";
	if (dynamic_cast<A*>(p))
		std::cout << "it's a" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "it's b" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "it's c" << std::endl;

	std::cout << "------------\n";
}

void identify(Base& p)
{
	// std::cout << "identify with reference\n";
	try
	{
		B& b = dynamic_cast<B&>(p);
		if (sizeof(b))
			std::cout << "It's b\n";
	}
	catch(std::exception &g)
	{
		try
		{
			A& a = dynamic_cast<A&>(p);
			if (sizeof(a))
				std::cout << "It's a\n";
		}
		catch(std::exception &e)
		{
			C& c = dynamic_cast<C&>(p);
			if (sizeof(c))
				std::cout << "It's c\n";
		}
	}
}

int main()
{
	Base *test = generate();

	identify(test);

	identify(*test);
	


	
	delete test;
	return (0);
}