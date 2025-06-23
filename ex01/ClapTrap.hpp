#ifndef ClapTrap_hpp
#define ClapTrap_hpp

#include <iostream>
#include <string>

class ClapTrap{
    private:
        std::string name;
        int hit_points = 10;
        int energy_points = 10;
        int attack_damage = 0;
    public:
        ClapTrap(std::string name);
        ~ClapTrap();
        ClapTrap(const ClapTrap& copy);
        ClapTrap &operator=(const ClapTrap& cp);

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};


#endif