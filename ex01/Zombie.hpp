/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatahere <tatahere@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 15:01:15 by tatahere          #+#    #+#             */
/*   Updated: 2025/02/07 18:06:21 by tatahere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>


class Zombie
{
	private:

		std::string name;

	public:
		Zombie(void);
		Zombie(std::string name);
		~Zombie(void);

		void	announce(void);
};

void	randomChump(std::string name);
Zombie	*newZombie(std::string name);
Zombie	*zombieHorde(int N, std::string name);
