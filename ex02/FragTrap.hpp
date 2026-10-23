#ifndef FRAGTRAP_CLASS
#define FRAGTRAP_CLASS

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
private:
public:
	FragTrap();
	FragTrap( const std::string& n );
	FragTrap( const FragTrap& cpy );
	~FragTrap();
	
	FragTrap&	operator=( const FragTrap& src );
	void		highFivesGuys( void );
};

#endif
