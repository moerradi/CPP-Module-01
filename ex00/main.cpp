#include "Zombie.hpp"

int main()
{
	Zombie *z1 = newZombie("Moe");
	z1->announce();
	Zombie *z2 = randomChump("KawKab");
	delete z1;
	delete z2;
}
