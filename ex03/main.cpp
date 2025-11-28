#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	std::cout << "=========Weapon==========" << std::endl;
	Weapon flight175;
	flight175.setType("Flight 175");
	std::cout << flight175.getType() << std::endl;

	std::cout << "==========HumanA=========" << std::endl;
	HumanA OussamaBenLaden("Oussama Ben Laden", flight175);
	OussamaBenLaden.attack();

	std::cout << "==========HumanB=========" << std::endl;
	HumanB GeorgeBush("George W. Bush");
	Weapon CIA;
	// CIA.setType("CIA");
	// GeorgeBush.setWeapon(CIA);
	GeorgeBush.attack();
	return (0);
}

// int main()
// {
// 	{
// 		Weapon club = Weapon("crude spiked club");
// 		HumanA bob("Bob", club);
// 		bob.attack();
// 		club.setType("some other type of club");
// 		bob.attack();
// 	}
// 	{
// 		Weapon club = Weapon("crude spiked club");
// 		HumanB jim("Jim");
// 		jim.setWeapon(club);
// 		jim.attack();
// 		club.setType("some other type of club");
// 		jim.attack();
// 	}
// 	return 0;
// }