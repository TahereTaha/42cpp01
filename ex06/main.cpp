/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatahere <tatahere@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 13:46:41 by tatahere          #+#    #+#             */
/*   Updated: 2025/02/09 17:58:33 by tatahere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Harl.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2 || argv[1][0] == '\0')
	{
		std::cout << "the parameters is incorect.\n";
		std::cout << "please put a command like:\n";
		std::cout << "./sed <filename> <threshold level>\n";
		std::cout << "and make sure that the <threshold level> in not empty" << std::endl;

		return (42);
	}
	Harl	harl;

	if (harl.set_level_threshold(argv[1]) == -1)
	{
		std::cout << "there is no level named like that." << std::endl;

		return (42);
	}
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
