/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsyyida <zsyyida@student42abudhabi.ae>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 14:10:02 by zsyyida           #+#    #+#             */
/*   Updated: 2023/10/11 14:51:37 by zsyyida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie	*Dynamic;
	std::string name_Dynamic;

	name_Dynamic = "Dynamic_memory";
	Dynamic = newZombie(name_Dynamic);
	std::cout <<"outside scope" << std::endl;
	Dynamic->announce();
	delete Dynamic;

	Zombie	Static;
	std::string	name_Static;
	name_Static = "Static_memory";
	randomChump(name_Static);
	std::cout <<"outside scope" << std::endl;
	Static.announce();
}

/*	Here we can see the dynamically allocated Zombie can announce
	its name outside the scope it was set but the statically allocated
	Zombie can only access its set name within the scope it was set and
	not outside the scope */