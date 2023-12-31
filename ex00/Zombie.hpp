/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsyyida <zsyyida@student42abudhabi.ae>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 14:10:22 by zsyyida           #+#    #+#             */
/*   Updated: 2023/10/10 10:37:36 by zsyyida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie {
private:
	std::string name;
public:
	Zombie(void);
	~Zombie(void);
	void announce( void );
	std::string getName() const;
	void setName(std::string name);
};

void randomChump( std::string name );
Zombie* newZombie( std::string name );

#endif
