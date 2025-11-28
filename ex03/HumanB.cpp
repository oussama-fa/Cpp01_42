#include "HumanB.hpp"

HumanB::HumanB(std::string n)
{
	name = n;
	weapon = NULL;
}

void	HumanB::attack()
{
	if (!weapon)
		std::cout << name << " has no weapon" << std::endl;
	else
		std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon& newWeapon)
{
	weapon = &newWeapon;
}

HumanB::~HumanB() {
}