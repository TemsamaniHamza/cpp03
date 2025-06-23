#include "ClapTrap.hpp"


int main() 
{
    ClapTrap bob("Bob");

    bob.attack("Target");
    bob.takeDamage(5);
    bob.beRepaired(4);

    return 0;
}