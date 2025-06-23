#ifndef FragTrap_hpp
#define FragTrap_hpp

#include <string>
#include <iostream>
#include "ClapTrap.hpp"


class FragTrap : public ClapTrap{
    public:
        FragTrap(std::string name);
        FragTrap();
        ~FragTrap();
        FragTrap(const FragTrap& copy);
        FragTrap &operator=(const FragTrap& cp);
        // void attack(const std::string& target);
        void highFivesGuys(void);
};  

#endif