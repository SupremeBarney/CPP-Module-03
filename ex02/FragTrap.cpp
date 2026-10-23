#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	_hitPoint = 100;
	_energyPoint = 100;
	_attackDamage = 30;
	std::cout << "FragTrap's default constructor called" << std::endl;
}

FragTrap::FragTrap( const std::string& n ) : ClapTrap( n )
{
	_hitPoint = 100;
	_energyPoint = 100;
	_attackDamage = 30;
	std::cout << "FragTrap's constructor called" << std::endl;
}

FragTrap::FragTrap( const FragTrap& cpy ) : ClapTrap( cpy )
{
	std::cout << "FragTrap's copy constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap's " << _name << " destructor called" << std::endl;
}

FragTrap&	FragTrap::operator=( const FragTrap& src )
{
	std::cout << "FragTrap's copy assignment called" << std::endl;
	if (this != &src)
		ClapTrap::operator=( src );
	return (*this);
}

void	FragTrap::highFivesGuys( void )
{
	if(_hitPoint)
	{
		if (_energyPoint)
			std::cout << "FragTrap " << _name << " High five !" << std::endl;
		else
			std::cout << "No more energy point :(" << std::endl;
	}
	else
		std::cout << "No more hitpoints :(" << std::endl;
}
