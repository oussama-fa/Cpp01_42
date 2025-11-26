#include "Zombie.hpp"

Zombie*	newZombie( std::string name )
{
	Zombie *z = new Zombie;
	z->setName(name);
	std::cout << z->getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return z;
}
