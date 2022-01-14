#include "easyfind.hpp"

Error::Error()
{

}

Error::~Error()
{

}

Error::Error(const Error &error)
{
	this->i = error.i;
}

Error &Error::operator=(const Error &error)
{
	this->i = error.i;
	return (*this);
}