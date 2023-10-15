/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsyyida <zsyyida@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 14:11:50 by zsyyida           #+#    #+#             */
/*   Updated: 2023/10/14 13:43:42 by zsyyida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
    private:
        std::string name;
        Weapon&     weapon;
    public:
        HumanA(std::string name, Weapon& weapon);
        ~HumanA();
        void attack();        
};
#endif
