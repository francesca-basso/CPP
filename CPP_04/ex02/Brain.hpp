#ifndef BRAIN_H
#define BRAIN_H

#include <iostream>

class Brain
{
	private:
		std::string _ideas[100];
	public:
		Brain();
		Brain(const Brain &brain);
		Brain &operator =(const Brain &brain);
		~Brain();
		void setIdea(const std::string &idea);
		std::string getIdea(void) const;
};


#endif