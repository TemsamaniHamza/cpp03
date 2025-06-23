#include "FragTrap.hpp"

FragTrap::FragTrap(std::string nm) : ClapTrap(nm) {
    name = nm;
    hit_points = 100;
    energy_points = 100;
    attack_damage = 30;
    std::cout << name << " FragTrap constructor is called" << std::endl;
};
FragTrap::FragTrap(){
    name = "Default";
    hit_points = 100;
    energy_points = 100;
    attack_damage = 30;
    std::cout << name << " FragTrap constructor is called" << std::endl;
};

FragTrap::~FragTrap(){
    std::cout << name << " FragTrap is being Destructed :(" << std::endl;
};

FragTrap::FragTrap(const FragTrap& copy){
    return ;
};


FragTrap& FragTrap::operator=(const FragTrap& cp)
{
    return *this;
};

void FragTrap::attack(const std::string& target){
    if(this->hit_points <= 0 || this->energy_points <= 0)
        std::cout << this->name << " Cannot attack" << std::endl;
    else
    {
        std::cout << "FragTrap " << this->name
         << " attacks " << target << ", causing "<< this->attack_damage 
         <<" points of damage! " << std::endl;
        this->energy_points -= 1;
    }

};


void FragTrap::highFivesGuys(void){
    std::cout << "FragTrap" << name << " requests a poisitive high five" << std::endl;
};

