#ifndef __ZOMBIE_HPP
#define __ZOMBIE_HPP
#include <iostream>
#include <string>

class Zombie {
	public:
		Zombie();
		Zombie(std::string name);
		Zombie(const Zombie &zombie);
		Zombie &operator=(const Zombie &z);
		~Zombie(void);
		void announce(void);
		void setName(std::string name);
	private:
		std::string _name;
};

Zombie*	zombieHorde(int N, std::string name);

#endif