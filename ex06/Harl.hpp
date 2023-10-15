/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsyyida <zsyyida@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 14:13:30 by zsyyida           #+#    #+#             */
/*   Updated: 2023/10/15 17:21:04 by zsyyida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>

class Harl
{
    private:
        void debug( void );
        void info( void );
        void warning( void );
        void error( void );
    public: 
        Harl();
        ~Harl();
        void complain( std::string level );
};

#endif