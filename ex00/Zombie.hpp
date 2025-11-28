#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie {
private:
	std::string	name;
public:
	std::string	getName();
	void	setName(std::string n);
	void	announce( void );
	Zombie();
	Zombie(std::string n);
	~Zombie();
};

void	randomChump( std::string name );
Zombie*	newZombie( std::string name );

#endif