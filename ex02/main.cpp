#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"




int main() {
    // ScavTrap bob("Scav");

    // bob.attack("Target");
    // bob.takeDamage(30);
    // bob.beRepaired(20);
    // bob.guardGate();
    // std::cout << "\n\n\n\n";

    FragTrap notbob("Bob");

    notbob.attack("Target");
    notbob.takeDamage(30);
    notbob.beRepaired(20);
    notbob.highFivesGuys();
    return 0;
}
