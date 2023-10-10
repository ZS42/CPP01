/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsyyida <zsyyida@student42abudhabi.ae>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 13:25:01 by zsyyida           #+#    #+#             */
/*   Updated: 2023/10/10 14:42:39 by zsyyida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie( std::string name ){
	Zombie *Var = new Zombie;
	Var->setName(name);
	return (Var);
}

Zombie* zombieHorde( int N, std::string name )
{
	int	i;
	Zombie *Horde = new Zombie[N];

	for (i = 0; i < N ; i++)
		Horde[i].setName(name);
	return (Horde);
}