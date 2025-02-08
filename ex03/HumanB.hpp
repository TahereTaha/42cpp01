/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatahere <tatahere@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 15:42:52 by tatahere          #+#    #+#             */
/*   Updated: 2025/02/08 16:48:29 by tatahere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		HUMANB_HPP
# define	HUMANB_HPP

# include <string>
# include "Weapon.hpp"

class	HumanB
{
	private:

		std::string	name;
		Weapon		*weapon;
	
	public:
		
		HumanB(std::string new_name);
		~HumanB(void);
		
		void	attack(void) const;
		void	setWeapon(Weapon &new_weapon);
};

#endif
