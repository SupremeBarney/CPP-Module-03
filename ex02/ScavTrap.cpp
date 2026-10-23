#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    _hitPoint = 100;
    _energyPoint = 50;
    _attackDamage = 20;
    std::cout << "ScavTrap's default constructor called" << std::endl;
}

ScavTrap::ScavTrap( const std::string n ) : ClapTrap( n )
{
    _hitPoint = 100;
    _energyPoint = 50;
    _attackDamage = 20;
    std::cout << "ScavTrap's constructor called" << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap& src) : ClapTrap( src )
{
    std::cout << "ScavTrap's copy constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << _name << " destructor called" << std::endl;
}

ScavTrap&	ScavTrap::operator=( const ScavTrap& src )
{
    std::cout << "ScavTrap's copy assignment operator called" << std::endl;
	if (this != &src)
		ClapTrap::operator=( src );
	return (*this);
}

void	ScavTrap::guardGate()
{
	if (_hitPoint)
	{
		if (_energyPoint)
			std::cout << "ScavTrap " << _name << " is now in Gatekeeper mode" << std::endl;
		else
			std::cout << "No more energy point :(" << std::endl;
	}
	else
		std::cout << "No more hitpoints :(" << std::endl;
}

void	ScavTrap::attack( const std::string& target )
{
	if (_hitPoint)
	{
		if (_energyPoint)
		{
			std::cout << "ScavTrap " << _name << " attacks " << target << ", " << "causing " << _attackDamage << " points of damage!" << std::endl;
			_energyPoint--;
		}
		else
			std::cout << "No more energy point :(" << std::endl;
	}
	else
		std::cout << "No more hitpoints :(" << std::endl;
}
