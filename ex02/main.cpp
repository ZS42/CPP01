/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsyyida <zsyyida@student42abudhabi.ae>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 14:10:58 by zsyyida           #+#    #+#             */
/*   Updated: 2023/10/11 15:09:50 by zsyyida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;

	std::cout << "memory address of string " << &string << std::endl;
	std::cout << "memory address held by stringPTR " << stringPTR <<std::endl;
	std::cout << "memory address held by stringREF " << &stringREF <<std::endl;

	std::cout << "value of string " << string << std::endl;
	std::cout << "value pointed to by stringPTR " << *stringPTR << std::endl;
	std::cout << "value pointed to by stringREF " << stringREF << std::endl;
}
