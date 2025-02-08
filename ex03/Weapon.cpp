/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatahere <tatahere@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 15:08:02 by tatahere          #+#    #+#             */
/*   Updated: 2025/02/08 15:55:15 by tatahere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Weapon.hpp"

Weapon::Weapon(void)
{
	type = "no weapon";
}

Weapon::Weapon(std::string _type)
{
	type = _type;
}

Weapon::~Weapon(void)
{
}

const std::string	&Weapon::getType() const
{
	return (type);
}

void				Weapon::setType(std::string new_type)
{
	type = new_type;
}
