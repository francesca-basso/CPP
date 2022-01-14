#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain constructor called." << std::endl;
}

Brain::~Brain()
{
 std::cout << "Brain destructor called" << std::endl;
}

Brain::Brain(const Brain &brain)
{
	std::cout << "Brain copy constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		_ideas[i] = brain._ideas[i];
}

Brain &Brain::operator=(const Brain &brain)
{
	std::cout << "Brain assignation operator" << std::endl;
	for (int i = 0; i < 100; i++)
		_ideas[i] = brain._ideas[i];
	return *this;
}

void Brain::setIdea(const std::string &idea)
{
	_ideas[0] = idea;
}

std::string Brain::getIdea(void) const
{
	return this->_ideas[0];
}