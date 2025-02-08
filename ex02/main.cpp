/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatahere <tatahere@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 18:42:34 by tatahere          #+#    #+#             */
/*   Updated: 2025/02/08 14:45:06 by tatahere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(void)
{
	std::string	str = "HI THIS IS BRAIN";

	std::string	*stringPTR = &str;
	std::string	&stringREF = str;

	std::cout << "the string is:\n" << str << std::endl;
	std::cout << "the memory addres of the string: " << &str << std::endl;
	std::cout << "the address of the ptr: " << stringPTR << std::endl;
	std::cout << "the address of the ref: " << &stringREF << std::endl;
	std::cout << "the value of the ptr: " << *stringPTR << std::endl;
	std::cout << "the value of the ref: " << stringREF << std::endl;
}
