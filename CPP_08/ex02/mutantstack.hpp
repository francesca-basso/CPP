#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <list>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
	typedef typename std::stack<T>::container_type::iterator iterator;

	MutantStack();
	MutantStack(const MutantStack& obj);
	~MutantStack();
	MutantStack &operator=(const MutantStack &obj);
	iterator begin();
	iterator end();
};

template <typename T>
MutantStack<T>::MutantStack()
{
	// silence is golden
}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack<T> &obj)
{
	*this = obj;
}

template <typename T>
MutantStack<T> &MutantStack<T>::operator=(const MutantStack<T> &obj)
{
	this->c = obj.c;
	return (*this);
}

template <typename T>
MutantStack<T>::~MutantStack()
{
	// silence is golden
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin()
{
	return std::stack<T>::c.begin();
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end()
{
	return std::stack<T>::c.end();
}


#endif