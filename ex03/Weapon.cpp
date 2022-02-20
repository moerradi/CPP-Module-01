#include "Weapon.hpp"

Weapon::Weapon() {
	// std::cout << "Weapon default cunstructor called !" << std::endl;
}

Weapon::Weapon(std::string type) {
	_type = type;
}

Weapon::Weapon(const Weapon &w) {
	_type = w._type;
}

Weapon::~Weapon() {
	// std::cout << "Weapon destructor called !" << std::endl;
}

Weapon &Weapon::operator=(const Weapon &w){
	if (this != &w) {
		_type = w._type;
	}
	return *this;
}

const std::string	&Weapon::getType(void) const {
	return _type;
}

void	Weapon::setType(std::string type) {
	_type = type;
}
