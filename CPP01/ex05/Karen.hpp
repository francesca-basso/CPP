#ifndef KAREN_H
#define KAREN_H

#include <iostream>
#include <sstream>

class Karen
{
	public:
		void complain(std::string level);
	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
	
};

#endif