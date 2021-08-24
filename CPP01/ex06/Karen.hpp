#ifndef KAREN_H
#define KAREN_H

#include <iostream>
#include <sstream>

class Karen
{
	public:
		void complain(std::string level);
		void message(std::string command);
	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
	
};

enum cases {DEBUG, INFO, WARNING, ERROR};

#endif