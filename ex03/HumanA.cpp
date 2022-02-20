#include "HumanA.hpp"



HumanA::HumanA() {

	// std::cout << "HumanA default constructor called" << std::endl;
}

HumanA::HumanA(std::string name, Weapon &weapon){
	_weapon = &weapon;
	_name = name;
}

HumanA::~HumanA() {
	// std::cout << "HumanA destructor called" << std::endl;
}

HumanA::HumanA(const HumanA &h) {
	_name = h._name;
	_weapon = h._weapon;
}

HumanA &HumanA::operator=(const HumanA &h)  {
	if (this != &h) {
		_name = h._name;
		_weapon = h._weapon;
	}
	return *this;
}

void	HumanA::setWeapon(Weapon &weapon) {
	_weapon = &weapon;
}

void	HumanA::attack(void) {
	std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}