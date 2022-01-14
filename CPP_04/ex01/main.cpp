#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main()
{
	Animal *an_array[10];
	

	for (size_t i = 0; i < 5; i++)
	{
		an_array[i] = new Cat();
	}
	for (size_t i = 5; i < 10; i++)
	{
		an_array[i] = new Dog();
	}

	Cat gigio = Cat();

	gigio.setIdea("ho fame");

	Cat athena = Cat(gigio);

	std::cout << gigio.getIdea() << '\n';

	std::cout << athena.getIdea() << '\n';

	gigio.setIdea("altra idea geniale di gigio");

	std::cout << gigio.getIdea() << '\n';

	std::cout << athena.getIdea() << '\n';

	for (size_t i = 0; i < 10; i++)
	{
		delete an_array[i];
	}
}