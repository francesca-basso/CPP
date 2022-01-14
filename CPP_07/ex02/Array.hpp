#ifndef ARRAY_HPP
#define ARRAY_HPP

template <class T>

class Array 
{
	public:
		Array();
		~Array();
		Array(unsigned int N);
		Array (const Array &val);
		Array &operator=(const Array &val);
		T& operator[](std::size_t idx)
		{
			if (idx > this->_size || idx < 0)
				throw std::exception();
			return this->arr_ptr[idx];
		}
	int	size();
	private:
		unsigned int _size;
		T *arr_ptr;
};

template <class T>
Array<T>::Array()
{
	return ;
}

template<class T>
Array<T>::~Array()
{

}

template<class T>
Array<T>::Array(const Array &val)
{
	this->arr_ptr = val;
}

template<class T>
Array<T> &Array<T>::operator=(const Array &val)
{
	this->arr_ptr = val;
	return (*this);
}

template <class T>
Array<T>::Array(unsigned int N)
{
	this->arr_ptr = new T[N];
	this->_size = N;
}
template <class T>
int		Array<T>::size()
{
	return (this->_size);	
}

#endif