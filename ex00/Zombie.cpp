/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsyyida <zsyyida@student42abudhabi.ae>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 14:10:16 by zsyyida           #+#    #+#             */
/*   Updated: 2023/10/09 14:55:33 by zsyyida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void){

	std::cout << "Zombie constructor called" << std::endl;
	return ;
}

Zombie::~Zombie(void){

	std::cout << getname() << "Zombie destructor called" << std::endl;
	return ;
}
Zombie* newZombie( std::string name ){
	Zombie *Zombie = new(Zombie);
	return (Zombie);
}

void randomChump( std::string name ){

}
std::string Zombie::getName() const
{
	return (name);
}

void Zombie::setName(std::string name)
{
	this->name = name;
}

void announce( void ){
	std::cout << "<name>: BraiiiiiiinnnzzzZ..." << std::endl;
}