/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatahere <tatahere@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 15:05:00 by tatahere          #+#    #+#             */
/*   Updated: 2025/02/07 18:13:25 by tatahere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*zombie_array;

	zombie_array = zombieHorde(3, "bob");
	size_t	i = 0;
	while (i < 3)
	{
		zombie_array[i].announce();
		i++;
	}
	delete [] zombie_array;
}
