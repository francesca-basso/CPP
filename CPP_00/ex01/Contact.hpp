#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class contact
{
	private:
		std::string first_name;
		std::string last_name;
		std::string darkest_secret;
		std::string nickname;
		std::string phone_number;
		int			index;
	public:
		std::string	get_first_name(void) { return this->first_name; }
		std::string	get_last_name(void) { return this->last_name; }
		std::string	get_nickname(void) { return this->nickname; }
		std::string	get_darkest_secret(void) { return this->darkest_secret; }
		std::string	get_phone_number(void) { return this->phone_number; }
		int			get_index(void) { return this->index; }
		void		set_index(int index) { this->index = index; }
		void		set_first_name(std::string name) { this->first_name = name; }
		void		set_last_name(std::string lname) { this->last_name = lname; }
		void		set_darkest_secret(std::string secret) { this->darkest_secret = secret; }
		void		set_nickname(std::string nickname) { this->nickname = nickname; }
		void		set_phone_number(std::string number) { this->phone_number = number; }
};

#endif