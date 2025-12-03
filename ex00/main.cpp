#include "Zombie.hpp"

int main() {
	Zombie obj1;
	std::cout << "==================annonce()===================" << std::endl;
	obj1.announce();

	std::cout << "==================newZombie===================" << std::endl;

	Zombie *obj2 = newZombie("MESSI");
	obj2->announce();
	delete obj2;

	Zombie *obj3 = newZombie("CR7");
	obj3->announce();
	delete obj3;

	std::cout << "==================randomChump===================" << std::endl;
	randomChump("Oufarah");
	
	std::cout << "============parametreConstracter================" << std::endl;
	Zombie obj6("OUSSAMA");
	
	std::cout << "===============Destracter===================" << std::endl;
	return (0);
}