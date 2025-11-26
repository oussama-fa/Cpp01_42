#include "Zombie.hpp"

int main() {
	int N = 5;

	Zombie *obj2 = zombieHorde(N, "Zombie Horde");

	delete[] obj2;
	return (0);
}