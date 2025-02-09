/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatahere <tatahere@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 13:46:41 by tatahere          #+#    #+#             */
/*   Updated: 2025/02/09 16:33:28 by tatahere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Harl.hpp"

int	main(void)
{
	Harl	harl;

	std::cout << "harl will complain about debug:\n" << std::endl;
	std::cout << "\t";
	harl.complain("DEBUG");
	std::cout << std::endl;
	std::cout << "harl will complain about info:\n" << std::endl;
	std::cout << "\t";
	harl.complain("INFO");
	std::cout << std::endl;
	std::cout << "harl will complain about warning:\n" << std::endl;
	std::cout << "\t";
	harl.complain("WARNING");
	std::cout << std::endl;
	std::cout << "harl will complain about error:\n" << std::endl;
	std::cout << "\t";
	harl.complain("ERROR");
	std::cout << std::endl;
}
