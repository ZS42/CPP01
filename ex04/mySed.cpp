/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mySed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsyyida <zsyyida@student42abudhabi.ae>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 14:12:39 by zsyyida           #+#    #+#             */
/*   Updated: 2023/10/16 15:52:46 by zsyyida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mySed.hpp"

MySed::MySed(std::string& filename): infile(filename)
{
    this->outfile = this->infile + ".replace";
}
MySed::~MySed()
{
}

void    MySed::myReplace(std::string s1, std::string s2)
{

	std::ifstream ifs;
	ifs.open (this->infile, std::ifstream::in);
    if (!ifs.is_open())
    {
        std::cerr << "Error: infile could not be opened" << std::endl;
        exit (1);
    }
    std::ofstream ofs;
    ofs.open(this->outfile, std::ofstream::out);
    if (!ofs.is_open())
    {
        std::cerr << "Error: outfile could not be opened" << std::endl;
        exit(1);
    }
    std::string line;
    // extracts characters from ifs and stores them in line until delimiter is found like '/n
    while(std::getline(ifs, line))
    {
        // returns position of first character of first match
        size_t pos = line.find(s1);
        // npos is a static member constant value with the greatest possible value
        // for an element of  type size_t. Here it means keep going till end of string.
        // whenever npos is used to compare it means end of string.
        while (pos != std::string::npos)
        {
			// to avoid infinite loop
			if (s1 != s2 && s1 != "" && s2 != "")
			{
            	line = line.substr(0, pos) + s2 + line.substr(pos + s1.length());
            	pos = line.find(s1);
			}
        }
        ofs << line <<std::endl;
    }
    ifs.close();
    ofs.close();
}

