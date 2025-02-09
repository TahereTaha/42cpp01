/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatahere <tatahere@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 13:47:27 by tatahere          #+#    #+#             */
/*   Updated: 2025/02/09 17:06:54 by tatahere         ###   ########.fr       */
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
	complain_action[0] = &Harl::debug;
	complain_action[1] = &Harl::info;
	complain_action[2] = &Harl::warning;
	complain_action[3] = &Harl::error;
}

Harl::~Harl(void)
{
}

int		Harl::get_level_num(std::string level)
{
	for (int i = 0; i < AMOUNT_LEVELS; i++)
	{
		if (level.compare(levels[i]) == 0)
			return (i);
	}
	return (-1);
}

void	Harl::complain(std::string level)
{
	int	num_level;

	num_level = get_level_num(level);
	if (num_level == -1)
	{
		std::cout << "there is no level named like that." << std::endl;
		return ;
	}
	//	I think I understand what a 'pending member-function invocation' is
	//	or at least pretend to.
	//	thanks to mbozzi (3937) on https://cplusplus.com/forum/beginner/239227/
	//	without you I coudn't be able to do it
	(this->*complain_action[num_level])();
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
