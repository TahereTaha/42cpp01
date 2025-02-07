/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatahere <tatahere@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 15:01:15 by tatahere          #+#    #+#             */
/*   Updated: 2025/02/07 15:27:26 by tatahere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>


class Zombie
{
	private:

		std::string name;

	public:
		Zombie(std::string name);
		~Zombie(void);

		void	announce(void);
};

void	randomChump(std::string name);
Zombie	*newZombie(std::string name);
