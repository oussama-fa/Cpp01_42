#include "Weapon.hpp"

Weapon::Weapon() {
}

Weapon::Weapon(std::string nameOfWeapon) {
	type = nameOfWeapon;
}

void	Weapon::setType(std::string newType) {
	type = newType;
}

const std::string&	Weapon::getType() const {
	return type;
}


Weapon::~Weapon() {
}