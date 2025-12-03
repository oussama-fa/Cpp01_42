#include "Zombie.hpp"
#include <sstream>

static std::string	ft_itos(size_t n)
{
	std::string ret = "";
	if (n >= 10)
	{
		ret += ft_itos(n / 10);
		ret += ft_itos(n % 10);
	}
	else if (n < 10)
		ret += n + '0';
	return ret;
}

Zombie* zombieHorde( int N, std::string name ) {
	if (N < 0)
		return NULL;
	Zombie *z = new Zombie[N];

	for (size_t	i = 0; i < (size_t)N; i++) {
		z[i].setName(name + " " + ft_itos(i + 1));
		std::cout << z[i].getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
	}
	return z;
}