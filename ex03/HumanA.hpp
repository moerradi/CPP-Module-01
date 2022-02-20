#ifndef __HUMANA_H
# define __HUMANA_H

#include "Weapon.hpp"

class HumanA {
	public:
		HumanA();
		HumanA(std::string name, Weapon &weapon);
		~HumanA();
		HumanA(const HumanA &h);
		HumanA &operator=(const HumanA &h);
		void	attack(void);
		void	setWeapon(Weapon &weapon);
	private:
		Weapon		*_weapon;
		std::string	_name;
};

#endif