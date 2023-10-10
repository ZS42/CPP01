/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsyyida <zsyyida@student42abudhabi.ae>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 14:10:16 by zsyyida           #+#    #+#             */
/*   Updated: 2023/10/10 11:41:47 by zsyyida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void){
	// setName("nameless");
	std::cout << this->getName() << " Zombie constructor called" << std::endl;
	return ;
}

Zombie::~Zombie(void){

	std::cout << this->getName() << " Zombie destructor called" << std::endl;
	return ;
}

std::string Zombie::getName() const
{
	return (name);
}

void Zombie::setName(std::string name)
{
	this->name = name;
}

void Zombie::announce( void ){
	std::cout << getName() <<": BraiiiiiiinnnzzzZ..." << std::endl;
}
