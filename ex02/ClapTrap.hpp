#ifndef CLAPTRAP_CLASS
#define CLAPTRAP_CLASS

#include <iostream>
#include <string>

class ClapTrap
{
protected:
	std::string		_name;
	unsigned int	_hitPoint;
	unsigned int	_energyPoint;
	unsigned int	_attackDamage;
public:
	ClapTrap();
	ClapTrap( const std::string n );
	ClapTrap( const ClapTrap& cpy );
	~ClapTrap();

	ClapTrap&	operator=( const ClapTrap& src );
	void		attack(const std::string& target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
};


#endif