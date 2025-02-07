/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatahere <tatahere@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 17:58:33 by tatahere          #+#    #+#             */
/*   Updated: 2025/02/07 18:10:08 by tatahere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie	*zombie_horde;
	int		i;

	zombie_horde = new Zombie[N];
	i = 0;
	while (i < N)
	{
		zombie_horde[i] = Zombie(name);
		i++;
	}
	return (zombie_horde);
}
