#include "CrapTrap.hpp"

int main(void)
{
	CrapTrap crapTrap("Yuji");
	crapTrap.attack("Takeshi");
	crapTrap.beRepaired(4);
	crapTrap.takeDamage(std::numeric_limits<unsigned int>::max());
	crapTrap.attack("Takeshi");
	crapTrap.beRepaired(4);
	return (0);
}
