#include "ClapTrap.hpp"

int	main( void )
{
	ClapTrap	a( "Alexy" );
	ClapTrap	b( a );
	ClapTrap	d;

	for (int i = 0; i < 10; i++)
		a.attack("Alexis");
	a.attack( "Energy ");
	a.beRepaired( 1 );
	for (int i = 0; i <= 10; i++)
		a.takeDamage( 1 );
	b.attack( "b" );
	b.beRepaired( 1 );
	b.takeDamage( 100 );
	b.attack( "b" );
	b.beRepaired( 1 );
	d = a;
	d.attack( "c" );
	d.takeDamage( 1 );
}
