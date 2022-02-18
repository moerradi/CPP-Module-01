#include "Zombie.hpp"

Zombie::Zombie(void) {}

Zombie::Zombie(std::string name)
{
	_name = name;
}

Zombie::~Zombie(){
	std::cout << "Zombie " << _name << " died allah ira7mo(ha)." << std::endl;
}

Zombie &Zombie::operator=(const Zombie &z){
	_name = z._name;
	return *this;
}

Zombie::Zombie(const Zombie &z)
{
	_name = z._name;
}

void  Zombie::announce(){
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}