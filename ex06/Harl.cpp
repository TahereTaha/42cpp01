/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatahere <tatahere@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 13:47:27 by tatahere          #+#    #+#             */
/*   Updated: 2025/02/09 18:10:27 by tatahere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Harl.hpp"


std::string	levels[AMOUNT_LEVELS] = 
{
	"DEBUG",
	"INFO",
	"WARNING",
	"ERROR"
};

std::string	comments[AMOUNT_LEVELS] =
{
	"I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!",
	"I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!",
	"I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.",
	"This is unacceptable! I want to speak to the manager now."
};

Harl::Harl(void)
{
	level_threshold = 0;
}

Harl::~Harl(void)
{
}

int		Harl::set_level_threshold(std::string new_level_threshold)
{
	int level_num;

	level_num = get_level_num(new_level_threshold);
	if (level_num == -1)
		return (-1);
	level_threshold = level_num;
	return (0);
}

e_level	Harl::get_level_num(std::string level)
{
	for (int i = 0; i < AMOUNT_LEVELS; i++)
	{
		if (level.compare(levels[i]) == 0)
			return ((e_level)i);
	}
	return ((e_level)-1);
}

void	Harl::complain(std::string level)
{
	e_level	num_level;

	num_level = get_level_num(level);
	if (num_level == -1)
	{
		std::cout << "there is no level named like that." << std::endl;
		return ;
	}
	if (num_level < level_threshold)
		return ;
	switch (num_level)
	{
		case (DEBUG):
			this->debug();
			break ;
		case (INFO):
			this->info();
			break ;
		case (WARNING):
			this->warning();
			break ;
		case (ERROR):
			this->error();
			break ;
		default:
			std::cout << "harl is confused" << std::endl;
			break ;
	}
}

void	Harl::debug(void)
{
	std::cout << comments[get_level_num("DEBUG")] << std::endl;
}

void	Harl::info(void)
{
	std::cout << comments[get_level_num("INFO")] << std::endl;
}

void	Harl::warning(void)
{
	std::cout << comments[get_level_num("WARNING")] << std::endl;
}

void	Harl::error(void)
{
	std::cout << comments[get_level_num("ERROR")] << std::endl;
}
