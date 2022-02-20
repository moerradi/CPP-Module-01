#ifndef __WEAPON_H
# define __WEAPON_H

#include <iostream>
#include <string>

class Weapon {
	public:
		Weapon();
		Weapon(std::string type);
		~Weapon();
		Weapon(const Weapon &w);
		Weapon &operator=(const Weapon &w);
		const std::string	&getType(void) const;
		void				setType(std::string type);

	private:
		std::string _type;
};

#endif