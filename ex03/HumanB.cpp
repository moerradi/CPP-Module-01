#include "HumanB.hpp"

HumanB::HumanB() {
	// std::cout << "HumanB default constructor called" << std::endl;
}

HumanB::HumanB(std::string name) {
	_name = name;
}

HumanB::~HumanB() {
	// std::cout << "HumanB destructor called" << std::endl;
}

HumanB::HumanB(const HumanB &h){
	_name = h._name;
	_weapon = h._weapon;
}

HumanB &HumanB::operator=(const HumanB &h) {
	if (this != &h) {
		_name = h._name;
		_weapon = h._weapon;
	}
	return *this;
}

void	HumanB::setWeapon(Weapon &weapon) {
	_weapon = &weapon;
}

void	HumanB::attack(void) {
	std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}