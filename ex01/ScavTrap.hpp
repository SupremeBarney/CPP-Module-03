#ifndef SCAVTRAP_CLASS
#define SCAVTRAP_CLASS

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:
public:
	ScavTrap();
	ScavTrap( const std::string n );
	~ScavTrap();

	void	guardGate();
	void	attack( std::string& target );
};

#endif