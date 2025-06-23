#include "FragTrap.hpp"






int main() {
    ScavTrap bob("Bob");

    bob.attack("Target");
    bob.takeDamage(30);
    bob.beRepaired(20);
    bob.guardGate();

    return 0;
}
