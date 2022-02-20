#include "Zombie.hpp"

int main(void) {
	Zombie *z = zombieHorde(5, "Hamid");
	for (int i = 0 ; i < 5 ; i++)
		z[i].announce();
	delete [] z;
}