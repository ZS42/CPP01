/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsyyida <zsyyida@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 14:11:45 by zsyyida           #+#    #+#             */
/*   Updated: 2023/10/14 16:23:44 by zsyyida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

/*: weapon(weapon) is an initialization list. It is used to initialize 
  the member variable weapon of the HumanA class with the value of the 
  weapon parameter passed to the constructor. This is typically done when 
  you want to initialize class members with values from the constructor's
  parameters. In this case, it's initializing the weapon member of the 
  HumanA instance with the weapon object that was passed as a reference 
  to the constructor.
  You must use initialization lists for const members and reference 
  members because these members cannot be assigned values after they 
  are constructed. An initialization list is the only way to set 
  their initial values.*/
  
HumanA::HumanA(std::string name, Weapon& weapon): weapon(weapon)
{
    this->name = name;
}

HumanA::~HumanA()
{
}

void HumanA::attack()
{
    std::cout << name <<" attacks with their " << weapon.getType() << std::endl;
}