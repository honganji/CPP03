#ifndef CRAP_TRAP_H
#define CRAP_TRAP_H

#include "iostream"

class CrapTrap
{
private:
	std::string _name;
	int hitPoints = 10;
	int energyPoints = 10;
	int attackDamage = 0;

public:
	CrapTrap(void);
	CrapTrap(std::string name);
	CrapTrap(const CrapTrap &t);
	CrapTrap &operator=(const CrapTrap &t);
	~CrapTrap(void);
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif
