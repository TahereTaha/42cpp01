/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatahere <tatahere@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 15:38:51 by tatahere          #+#    #+#             */
/*   Updated: 2025/02/08 16:49:15 by tatahere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string new_name)
{
	name = new_name;
	weapon = NULL;
}

HumanB::~HumanB(void)
{
}

void	HumanB::attack(void) const
{
	if (weapon)
		std::cout << name << " attacts with their " << weapon->getType() << std::endl;
	else
		std::cout << name << " attacts with their " << "no weapon" << std::endl;
}

void	HumanB::setWeapon(Weapon &new_weapon)
{
	weapon = &new_weapon;
}
