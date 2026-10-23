#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
}

ScavTrap::ScavTrap( const std::string n ) : ClapTrap( n )
{
    _hitPoint = 100;
    _energyPoint = 50;
    _attackDamage = 20;
    std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << _name << " destructor called" << std::endl;
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

void	ScavTrap::attack( std::string& target )
{
	if (_hitPoint)
	{
		if (_energyPoint)
			std::cout << "ScavTrap " << _name << " atta"
		else
			std::cout << "No more energy point :(" << std::endl;
	}
	else
		std::cout << "No more hitpoints :(" << std::endl;
}