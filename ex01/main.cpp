#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main( void )
{
	ClapTrap	a( "Alexy" );
	ScavTrap	b( "Barney" );
	ScavTrap	d;
	ScavTrap	e( b );

	for (int i = 0; i < 10; i++)
		a.attack("Alexis");
	a.attack( "Energy ");
	a.beRepaired( 1 );
	for (int i = 0; i <= 10; i++)
		a.takeDamage( 1 );
	b.attack("b" );

	ClapTrap	c( a );

	b.attack( "Geronimo" );
	b.guardGate();
	b.takeDamage( 1 );
	b.beRepaired( 1 );
	b.takeDamage( 100 );
	b.attack( "b" );
	b.beRepaired( 1 );

	d = b;
	d.attack( "c" );
	d.guardGate();
	d.takeDamage( 100 );
	d.guardGate();

	for (int i = 0; i <= 50; i++)
		e.attack("blabla");
}
