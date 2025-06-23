#ifndef ScavTrap_hpp
#define ScavTrap_hpp

#include <string>
#include <iostream>
#include "ClapTrap.hpp"


class ScavTrap : public ClapTrap{
    public:
        ScavTrap(std::string name);
        ScavTrap();
        ~ScavTrap();
        ScavTrap(const ScavTrap& copy);
        ScavTrap &operator=(const ScavTrap& cp);
        void attack(const std::string& target);
        void guardGate();
};  

#endif