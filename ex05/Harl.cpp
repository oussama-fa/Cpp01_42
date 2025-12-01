#include "Harl.hpp"

typedef void (Harl::*HarlFunc)();

struct LevelMap {
    std::string level;
    HarlFunc    func;
};

void Harl::debug( void )
{
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}
void Harl::info( void )
{
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}
void Harl::warning( void ) {
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years, whereas you started working here just last month." << std::endl;
}

void Harl::error( void ) {
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
    LevelMap table[4] = {
        {"DEBUG",   &Harl::debug},
        {"INFO",    &Harl::info},
        {"WARNING", &Harl::warning},
        {"ERROR",   &Harl::error}
    };

    for (int i = 0; i < 4; i++) {
        if (table[i].level == level) {
            (this->*table[i].func)();
            return;
        }
    }
    std::cout << "Wrong Input ! This " << level << " is Invalid\n";
}
