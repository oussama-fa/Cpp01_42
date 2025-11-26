#include "Zombie.hpp"

Zombie::Zombie() {
	name = "ZOMBIE";
	std::cout << "* Constracter is Called *" << std::endl;
}

Zombie::~Zombie() {
	std::cout << "* " << name;
	std::cout << " is Deleted *" << std::endl;
}

void Zombie::announce( void ) {
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

std::string Zombie::getName() {
	return name;
}

void Zombie::setName(std::string n) {
	name = n;
}
