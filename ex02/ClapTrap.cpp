#include "ClapTrap.hpp"


ClapTrap::ClapTrap() : name("Default"), hit_points(10), energy_points(10), attack_damage(0){
    std::cout << "ClapTrap default constructor is called" << std::endl;
};


ClapTrap::ClapTrap(std::string name) : name(name), hit_points(10), energy_points(10), attack_damage(0){
    std::cout << "Claptrap of name " << this->name 
    << " is being costructed" << std::endl;
};


ClapTrap::~ClapTrap(){
    std::cout << this->name << " ClapTrap is being Destructed!" << std::endl;
};

ClapTrap::ClapTrap(const ClapTrap &copy)
{
    std::cout << "copy contructor called" << std::endl;
    *this = copy;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &cp)
{
    std::cout << "copy assignmenet operator called " << std::endl;
    if(this != &cp)
    {
        this->hit_points = cp.hit_points;
        this->energy_points = cp.hit_points;
        this->attack_damage = cp.hit_points;
    }
    return *this;
}

void ClapTrap::attack(const std::string& target){
    if(this->hit_points <= 0 || this->energy_points <= 0)
        std::cout << this->name << " Cannot attack" << std::endl;
    else
    {
        std::cout << "ClapTrap " << this->name
         <<  " attacks " << target << ", causing "<< this->attack_damage 
         <<" points of damage!" << std::endl;
        this->energy_points -= 1;
    }

}

void ClapTrap::takeDamage(unsigned int amount){
    if(this->hit_points <= 0 || this->energy_points <= 0)
        std::cout << this->name << " is already dead :x" << std::endl;
    else{
        this->hit_points -= amount;
        std::cout << "ClapTrap " << this->name
        << " is being attacked, he lose " << amount
        << " of heallth, the remaining health is only "
        << this->hit_points << std::endl;
    }
};

void ClapTrap::beRepaired(unsigned int amount){
    if(this->hit_points <= 0 || this->energy_points <= 0)
        std::cout << this->name << " Cannot be Repaired :'(" << std::endl;
}

