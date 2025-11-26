#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ) {
	Zombie *z = new Zombie[N];

	for (int i = 0; i < N; i++) {
		z[i].setName(name + " " + (char)(i + '1'));
		std::cout << z[i].getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
	}
	return z;
}