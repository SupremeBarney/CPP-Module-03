#ifndef SCAVTRAP_CLASS
#define SCAVTRAP_CLASS

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:
public:
	ScavTrap();
	ScavTrap( const std::string n );
	ScavTrap( const ScavTrap& cpy );
	~ScavTrap();

	ScavTrap&	operator=( const ScavTrap& src );
	void		guardGate();
	void		attack( const std::string& target );
};

#endif
