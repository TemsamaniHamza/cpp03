#ifndef ClapTrap_hpp
#define ClapTrap_hpp

#include <iostream>
#include <string>

class ClapTrap{
    protected:
        std::string name;
        int hit_points;
        int energy_points;
        int attack_damage;
    public:
        ClapTrap();
        ClapTrap(std::string name);
        ~ClapTrap();
        ClapTrap(const ClapTrap& copy);
        ClapTrap &operator=(const ClapTrap& cp);

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};


#endif