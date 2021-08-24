#include "Karen.hpp"

int main(int argc, char **argv)
{
	Karen karen;
	if (argc > 2 || argc <= 1)
		return 0;
	std::string command = argv[1];
	karen.message(command);
}