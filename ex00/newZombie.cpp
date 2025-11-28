#include "Zombie.hpp"

Zombie*	newZombie( std::string name )
{
	Zombie *z = new Zombie(name);
	std::cout << z->getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return z;
}
