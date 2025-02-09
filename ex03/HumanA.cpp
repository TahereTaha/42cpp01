/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatahere <tatahere@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 15:30:37 by tatahere          #+#    #+#             */
/*   Updated: 2025/02/08 17:04:20 by tatahere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "HumanA.hpp"
#include "Weapon.hpp"

//	the ":" is for initialising the reference that cant be modify.
//	it is like code that is before the constructor.
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
