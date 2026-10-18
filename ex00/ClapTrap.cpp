#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name(), _hitPoint(10), _energyPoint(10), _attackDamage(0)
{
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap( const std::string n ) : _name(n), _hitPoint(10), _energyPoint(10), _attackDamage(0)
{
	std::cout << "Constructor called" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap& cpy ) : _name(cpy._name), _hitPoint(cpy._hitPoint), _energyPoint(cpy._energyPoint), _attackDamage(cpy._attackDamage)
{
	std::cout << "Copy constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}

ClapTrap&	ClapTrap::operator=( const ClapTrap& src )
{
	if (this == &src)
		return (*this);
	_name = src._name;
	_hitPoint = src._hitPoint;
	_energyPoint = src._energyPoint;
	_attackDamage = src._attackDamage;
	return (*this);
}

void	ClapTrap::attack(const std::string& target)
{
	if (_hitPoint > 0)
	{
		if (_energyPoint > 0 )
		{
			std::cout << "ClapTrap " << _name << " attacks " << target << ", " << "causing " << _attackDamage << " points of damage!" << std::endl;
			_energyPoint--;
		}
		else
			std::cout << "No more energy :(" << std::endl;
	}
	else
		std::cout << "No hitpoint for attack" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoint > 0)
	{
		std::cout << "ClapTrap " << _name << " took " << amount << " damage" << std::endl;
		if (amount > _hitPoint)
			_hitPoint = 0;
		else
			_hitPoint -= amount;
	}
	else
		std::cout << _name << " is already dead" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_hitPoint > 0)
	{
		if (_energyPoint > 0 )
		{
			std::cout << "ClapTrap " << _name << " healed " << amount << " hitpoints" << std::endl;
			_hitPoint += amount;
			_energyPoint--;
		}
		else
			std::cout << "No more energy :(" << std::endl;
	}
	else
		std::cout << "No hitpoint to be repaired" << std::endl;
}
