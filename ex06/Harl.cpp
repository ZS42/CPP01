/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsyyida <zsyyida@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 14:13:26 by zsyyida           #+#    #+#             */
/*   Updated: 2023/10/15 17:22:09 by zsyyida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{ 
}  

Harl::~Harl()
{   
}

void Harl::debug( void )
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info( void )
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning( void )
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error( void )
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain( std::string  string)
{
    // Make an array of all possible levels
    std::string level[4] = {"debug", "info", "warning", "error"};
    // Declare an array of Pointers to Member Functions:
    void (Harl::*complainFunctionPointer[4])();
    // Initialize the Pointers by assigning to address of member functions:
    complainFunctionPointer[0] = &Harl::debug;
    complainFunctionPointer[1] = &Harl::info;
    complainFunctionPointer[2] = &Harl::warning;
    complainFunctionPointer[3] = &Harl::error;
    for (int i = 0; i < 4; i++)
    {
        if (string == level[i])
        {
            (this->*complainFunctionPointer[i])();
            break ;
        }
    }
}