/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsyyida <zsyyida@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 14:12:53 by zsyyida           #+#    #+#             */
/*   Updated: 2023/10/16 09:29:37 by zsyyida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mySed.hpp"

int main(int ac , char **av)
{
    if (ac != 4)
    {
        std::cerr << "wrong number of arguments" << std::endl;
        return (1);
    }
    else
    {
        MySed   sed(av[1]);
        sed.replace(av[2], av[3]);
    }
    return (0);
}