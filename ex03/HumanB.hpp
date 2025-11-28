#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB {
private:
	Weapon *weapon;
public:
	std::string name;
	void	attack();
	HumanB(std::string n);
	void	setWeapon(Weapon& w);
	~HumanB();
};

#endif