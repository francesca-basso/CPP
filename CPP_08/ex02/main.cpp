#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <list>
#include <stack>

#include "mutantstack.hpp"

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);

	mstack.push(0);

	std::list<int>	lista;

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;
	while (it != ite) {
		std::cout << *it << std::endl;
	++it; }
	std::stack<int> s(mstack);

	MutantStack<std::string> better_test;
	better_test.push("Ho");
	better_test.push("Tante");
	better_test.push("noci");
	better_test.push("di");
	better_test.push("cocco");
	better_test.push("splendide");
	better_test.push("messe");
	better_test.push("in fila");
	better_test.push("per");
	better_test.push("tre");
	better_test.push("po po po");

	for (MutantStack<std::string>::iterator it = better_test.begin(); it != better_test.end(); it++)
	{
		std::cout << *it << ' ';
	}
	






	return (0);
}