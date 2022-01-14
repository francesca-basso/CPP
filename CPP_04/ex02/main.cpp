#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	Animal *an_array[10];
	
	//Animal test = Animal(); // not possible 

	for (size_t i = 0; i < 5; i++)
	{
		an_array[i] = new Cat();
	}
	for (size_t i = 5; i < 10; i++)
	{
		an_array[i] = new Dog();
	}
	for (size_t i = 0; i < 10; i++)
	{
		delete an_array[i];
	}
}