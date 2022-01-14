#include "Data.hpp"

Data::Data()
{
	
}

Data::Data(int i)
{
	this->i = i;
	//std::cout << "Constructor called" << std::endl;
}

Data::Data(const Data &obj)
{
	this->i = obj.i;
}

Data::~Data()
{
	//std::cout << "Destructor called" << std::endl;
}

Data &Data::operator=(const Data &obj)
{
	this->i = obj.i;
	return (*this);
}

uintptr_t serialize(Data* ptr)
{
	uintptr_t to_ret;

	to_ret = reinterpret_cast<uintptr_t>(ptr);
	return (to_ret);
}

Data	*deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}