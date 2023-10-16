/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mySed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsyyida <zsyyida@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 14:12:39 by zsyyida           #+#    #+#             */
/*   Updated: 2023/10/16 09:46:12 by zsyyida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mySed.hpp"

MySed::MySed(std::string filename): infile(filename)
{
    this->outfile = this->infile.append(".replace");
}
MySed::~MySed()
{
}

void    MySed::replace(std::string s1, std::string s2)
{
    std::ifstream ifs(this->infile); 
    ifs.open(this->infile, std::ifstream::in);
    if (!ifs.is_open())
        std::cerr << "Error: infile could not be opened" << std::endl;
    else
    {
        std::ofstream ofs(this->outfile);
        ofs.open(this->outfile, std::ofstream::out);
        if (!ofs.is_open())
            std::cerr << "Error: outfile could not be opened" << std::endl;
        ofs.close();
    }
    ifs.close();
}