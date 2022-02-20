#ifndef __HUMANB_H
# define __HUMANB_H

#include "Weapon.hpp"

class HumanB {
	public:
		HumanB();
		HumanB(std::string name);
		~HumanB();
		HumanB(const HumanB &h);
		HumanB &operator=(const HumanB &h);
		void	attack(void);
		void	setWeapon(Weapon &weapon);
	private:
		Weapon		*_weapon;
		std::string	_name;
};

#endif