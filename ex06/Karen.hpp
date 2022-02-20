#ifndef __KAREN_HPP
# define __KAREN_HPP
#include <iostream>
#include <map>
class Karen {
	typedef void (Karen::*fnPtr)(void);
	public:
		Karen();
		~Karen();
		Karen(Karen const &);
		Karen &operator=(const Karen &);
		void complain(std::string level);
	private:
		std::map<std::string, fnPtr> _complaints;
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
};

#endif