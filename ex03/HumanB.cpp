/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsyyida <zsyyida@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 14:11:38 by zsyyida           #+#    #+#             */
/*   Updated: 2023/10/14 16:26:27 by zsyyida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->name = name;
}

HumanB::~HumanB()
{
}

/*because HumanB may not always have a weapon means 
  that it must be passed as a pointer and not reference.
  reference must be initialised in constructor and cant be NULL.
  Because it is a pointer it can be set to null and changed and
  is passed with & 
  you can use a passed reference as a pointer by assigning its 
  address to a pointer and then using that pointer*/
void HumanB::setWeapon(Weapon& weapon)
{
    this->weapon = &weapon;
}
void HumanB::attack()
{
    /*Just to show it can be NULL*/
    // this->weapon = NULL;
    if (this->weapon != NULL && this->weapon->getType() != "")
        std::cout << name <<" attacks with their " << this->weapon->getType() << std::endl;
    else
        std::cout << name <<" doesn't have a weapon so cant attack."<< std::endl;
}