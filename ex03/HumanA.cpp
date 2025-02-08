/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatahere <tatahere@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 15:30:37 by tatahere          #+#    #+#             */
/*   Updated: 2025/02/08 16:44:21 by tatahere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string new_name, Weapon &new_weapon): weapon(new_weapon)
{
	name = new_name;
}

HumanA::~HumanA(void)
{
}

void	HumanA::attack(void) const
{
	std::cout << name << " attacts with their " << weapon.getType() << std::endl;
}
