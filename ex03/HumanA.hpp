/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatahere <tatahere@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 15:15:48 by tatahere          #+#    #+#             */
/*   Updated: 2025/02/08 16:43:55 by tatahere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		HUMANA_HPP
# define	HUMANA_HPP

# include <string>
# include "Weapon.hpp"

class	HumanA
{
	private:
		std::string	name;
		Weapon		&weapon;
	public:
		
		HumanA(std::string new_name, Weapon &new_weapon);
		~HumanA(void);
		
		void	attack(void) const;
};

#endif
