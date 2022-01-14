#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>

class Data
{
	public:
		Data();
		Data(int i);
		Data(const Data &obj);
		~Data();
		Data &operator=(const Data &obj);
	int i;
};

uintptr_t serialize(Data* ptr);
Data	*deserialize(uintptr_t raw);

#endif