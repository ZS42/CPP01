/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mySed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsyyida <zsyyida@student42abudhabi.ae>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 14:12:46 by zsyyida           #+#    #+#             */
/*   Updated: 2023/10/16 15:51:29 by zsyyida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MYSED_HPP
# define MYSED_HPP

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

class MySed
{
    private:
        std::string infile;
        std::string outfile;
    public:
        MySed(std::string& filename);
        ~MySed();
        void    myReplace(std::string s1, std::string s2);
};
#endif