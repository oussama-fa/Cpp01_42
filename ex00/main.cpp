#include "Zombie.hpp"

int main() {
	Zombie obj1;
	obj1.announce();

	randomChump("CR7");
	
	
	Zombie *obj2 = newZombie("MESSI");
	delete obj2;
	
	
	return (0);
}