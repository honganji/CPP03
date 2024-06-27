#ifndef CRAP_TRAP_H
#define CRAP_TRAP_H

#include "iostream"
#include "limits"

class CrapTrap
{
private:
	std::string _name;
	unsigned int _hitPoints;
	unsigned int _energyPoints;
	unsigned int _attackDamage;
	bool _check(void);

public:
	CrapTrap(void);
	CrapTrap(std::string name);
	CrapTrap(const CrapTrap &t);
	CrapTrap &operator=(const CrapTrap &t);
	~CrapTrap(void);
	void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif
