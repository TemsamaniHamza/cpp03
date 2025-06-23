#include "ScavTrap.hpp"

int main() {
    ClapTrap notbob("[notbob]");

    notbob.attack("Target");
    notbob.takeDamage(5);
    notbob.beRepaired(4);

        std::cout << "\n\n\n\n\n\n\n\n\n";
    ScavTrap bob("Bob");

    bob.attack("Target");
    bob.takeDamage(30);
    bob.beRepaired(20);
    bob.guardGate();

    return 0;
}
