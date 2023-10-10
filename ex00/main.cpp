/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsyyida <zsyyida@student42abudhabi.ae>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 14:10:02 by zsyyida           #+#    #+#             */
/*   Updated: 2023/10/10 11:54:36 by zsyyida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie	*Potato;
	Zombie	Foo;
	Zombie	*Random;

	Foo.setName("Foo");
	Foo.announce();
	Potato = newZombie("not_potato");
	Potato->announce();
	delete Potato;
	Random = newZombie("randomChump");
	Random->announce();
	delete Random;
}
