/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsyyida <zsyyida@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 14:12:10 by zsyyida           #+#    #+#             */
/*   Updated: 2023/10/14 14:37:42 by zsyyida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{   
    this->type = type;
}

Weapon::~Weapon()
{   
}

const   std::string& Weapon::getType()
{
    return(type);
}

void Weapon::setType(std::string type)
{
    this->type = type;
}