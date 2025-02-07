/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZobie.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatahere <tatahere@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 15:21:47 by tatahere          #+#    #+#             */
/*   Updated: 2025/02/07 15:27:55 by tatahere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Zombie.hpp"

Zombie	*newZombie(std::string name)
{
	Zombie	*new_zonbie;

	new_zonbie = new Zombie(name);
	return (new_zonbie);
}

