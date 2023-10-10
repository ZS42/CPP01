/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsyyida <zsyyida@student42abudhabi.ae>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 14:10:33 by zsyyida           #+#    #+#             */
/*   Updated: 2023/10/10 14:40:40 by zsyyida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie		*ptr;
	int			i;
	std::string	name;
	int			N;

	std::cout << "Please enter name of Zombies" << std::endl;
	std::cin >> name;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::cout << "Please enter number of Zombies" << std::endl;
	std::cin >> N;
	// check if int
	if (!std::cin.good())
	{
		std::cout << "invalid entry" << std::endl;
		// resetting cin
		std::cin.clear();
		// ignoring everything after a space until \n or eof until max streamsize ie no limit
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
	if (N < 1)
		std::cout << "Positive numbers only" << std::endl;
	if (N >= 0)
	{
		ptr = zombieHorde(N, name);
		for (i= 0; i < N; i++)
			ptr[i].announce();
		delete[] ptr;
	}
}