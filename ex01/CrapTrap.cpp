#include "CrapTrap.hpp"

CrapTrap::CrapTrap(void) : _name("Yoshi"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Default constructor is called and the name is ";
	std::cout << "initialized as " << _name << std::endl;
}
CrapTrap::CrapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "A constructor is called and the name is ";
	std::cout << "initialized as " << _name << std::endl;
}
CrapTrap::CrapTrap(const CrapTrap &t)
{
	_name = t._name;
	_hitPoints = t._hitPoints;
	_energyPoints = t._energyPoints;
	_attackDamage = t._attackDamage;
}
CrapTrap &CrapTrap::operator=(const CrapTrap &t)
{
	if (this != &t)
	{
		_name = t._name;
		_hitPoints = t._hitPoints;
		_energyPoints = t._energyPoints;
		_attackDamage = t._attackDamage;
	}
	return (*this);
}
CrapTrap::~CrapTrap(void)
{
	std::cout << _name << " is destroyed!" << std::endl;
}

bool CrapTrap::_check(void)
{
	if (!_energyPoints)
	{
		std::cout << "You don't have any energy!" << std::endl;
		return (false);
	}
	if (!_hitPoints)
	{
		std::cout << "You don't have any hit points! Repair it!" << std::endl;
		return (false);
	}
	return (true);
}

void CrapTrap::attack(const std::string &target)
{
	if (!_check())
		return;
	_energyPoints--;
	std::cout << "ClapTrap " << _name << " attacks " << target << ", causing ";
	std::cout << _attackDamage << " points of damage!" << std::endl;
}

void CrapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << _name << " is attacked ";
	std::cout << amount << " points of damage!" << std::endl;
	if (_hitPoints < amount)
		_hitPoints = 0;
	else
		_hitPoints -= amount;
	std::cout << "current hp is " << _hitPoints << std::endl;
}

void CrapTrap::beRepaired(unsigned int amount)
{
	if (!_check())
		return;
	_energyPoints--;
	std::cout << "hp is repaired " << amount << std::endl;
	if (std::numeric_limits<unsigned int>::max() - amount < _hitPoints)
		_hitPoints = std::numeric_limits<unsigned int>::max();
	else
		_hitPoints += amount;
	std::cout << "current hp is " << _hitPoints << std::endl;
}
