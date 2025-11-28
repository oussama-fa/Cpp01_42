#include "Weapon.hpp"

class HumanA {
private:
	Weapon& weapon;
public:
	std::string name;
	void	attack();
	HumanA(std::string n, Weapon& weapon);
	~HumanA();
};

