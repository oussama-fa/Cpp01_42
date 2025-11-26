#include "Zombie.hpp"

void randomChump( std::string name ) {
	Zombie z;
	z.setName(name);
	std::cout << z.getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}