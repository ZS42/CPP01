/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsyyida <zsyyida@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 14:10:58 by zsyyida           #+#    #+#             */
/*   Updated: 2023/10/12 18:45:29 by zsyyida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;

	std::cout << "memory address of string : " << &string << std::endl;
	std::cout << "memory address held by stringPTR : " << stringPTR <<std::endl;
	std::cout << "memory address held by stringREF : " << &stringREF <<std::endl;

	std::cout << "value of string : " << string << std::endl;
	std::cout << "value pointed to by stringPTR : " << *stringPTR << std::endl;
	std::cout << "value pointed to by stringREF : " << stringREF << std::endl;
}

/*if you pass value of string <string> you pass a copy as <string> that expires after the function ends.
  the original variable is not affected and remains same. The copy has a different address.

  if you pass pointer to string <string *> as <&string>you can access the value at the address pointed to 
  by dereferencing it in the function with a *. This original value is changed after whatever the function does to it

  if you pass reference to string <&string>you can access the value in the function using string.
  No need to dereference. Here also the original value is changed after whatever the function does to it
  
  Hence <string>, <stringREF>and <*stringPTR> all have the same value at the same address. 
  The address can be accessed by using <&string> or <stringPTR> or <&stringREF>.
  */