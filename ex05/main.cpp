/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsyyida <zsyyida@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 14:13:13 by zsyyida           #+#    #+#             */
/*   Updated: 2023/10/15 18:08:58 by zsyyida          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
    Harl customer;
    
    // Call the Member Function via the Pointer array:
    customer.complain("debug");
    customer.complain("info");
    customer.complain("warning");
    customer.complain("error");
    return (0);
}
/* In C++, you can use pointers to member functions 
to store, pass, and call member functions dynamically. 
This can be useful in scenarios where you want to decide
 at runtime which member function to call, or when 
 you're working with callbacks. Here's how you can 
 use pointers to member functions in C++:

Define a Class with Member Functions:
First, define a class with the member 
    functions you want to work with. For example:
    
    class MyClass {
public:
    void memberFunction1() {
        // Function 1 implementation
    }
    
    void memberFunction2() {
        // Function 2 implementation
    }
};

Declare a Pointer to Member Function:
    Declare a pointer to a member function with the
    appropriate syntax. The syntax for declaring a 
    pointer to a member function is a bit complex 
    and depends on the class type. It follows this 
    general pattern:
    
    return_type (ClassType::*)(parameter_types)
    void (MyClass::*functionPointer)() = nullptr;


Initialize the Pointer:
    Initialize the pointer with the address of the member 
    function you want to call. Here's how you can do it:

    functionPointer = &MyClass::memberFunction1;

Call the Member Function via the Pointer:
    To call the member function using the pointer, you need 
    to use the object on which you want to call the function:
    
    MyClass obj;
(obj.*functionPointer)(); // Call memberFunction1
*/