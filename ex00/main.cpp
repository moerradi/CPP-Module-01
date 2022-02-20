#include "Zombie.hpp"

int main() {
	Zombie *z1 = newZombie("Moe");
	z1->announce();
	randomChump("KawKab");
	delete z1;
}
