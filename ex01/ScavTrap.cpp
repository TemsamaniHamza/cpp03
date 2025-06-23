#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string nm){
    name = nm;
    hit_points = 100;
    energy_points = 50;
    attack_damage = 20;
    std::cout << name << " Scavtrap constructor is called" << std::endl;
};
ScavTrap::ScavTrap(){
    name = "Default";
    hit_points = 100;
    energy_points = 50;
    attack_damage = 20;
    std::cout << name << " Scavtrap constructor is called" << std::endl;
};

ScavTrap::~ScavTrap(){
    std::cout << name << " ScavTRap is being Destructed :(" << std::endl;
};

ScavTrap::ScavTrap(const ScavTrap& copy){
    return ;
};


ScavTrap& ScavTrap::operator=(const ScavTrap& cp)
{
    return *this;
};

void ScavTrap::attack(const std::string& target){
    if(this->hit_points <= 0 || this->energy_points <= 0)
        std::cout << this->name << " Cannot attack" << std::endl;
    else
    {
        std::cout << "ScavTrap " << this->name
         << " attacks " << target << ", causing "<< this->attack_damage 
         <<" points of damage! " << std::endl;
        this->energy_points -= 1;
    }

};


void ScavTrap::guardGate(){
    std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
};
