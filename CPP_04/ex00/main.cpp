#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	const WrongAnimal *wrong = new WrongCat();

	wrong->makeSound();

	const WrongCat *wrongcat = new WrongCat();

	wrongcat->makeSound();

	std::cout << wrong->getType() << std::endl;
	std::cout << wrongcat->getType() << '\n';

	delete j;
	delete i;
	delete meta;
	delete wrong;
	delete wrongcat;
}