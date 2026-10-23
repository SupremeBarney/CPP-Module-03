#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int	main( void )
{
	FragTrap	a;
	FragTrap	b( "Alexy" );
	FragTrap	c( b );
	FragTrap	d( "1");
	FragTrap	e( "2");
	FragTrap	f( "3");

	a = c;
	a.highFivesGuys();
	for (size_t i = 0; i < 101; i++)
		a.attack( "Alexis" );
	a.highFivesGuys();
	a.beRepaired( 100 );
	b.attack( "Geronimo" );
	b.takeDamage( 1000 );
	b.highFivesGuys();
	c.beRepaired( 100 );
}
