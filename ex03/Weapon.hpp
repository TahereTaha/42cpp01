/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatahere <tatahere@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 15:00:54 by tatahere          #+#    #+#             */
/*   Updated: 2025/02/08 16:25:08 by tatahere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		WEAPON_HPP
# define	WEAPON_HPP

# include <string>

class	Weapon
{
	private:

		std::string	type;

	public:

		Weapon(void);
		Weapon(std::string _type);
		~Weapon(void);

		const std::string	&getType(void) const;
		void				setType(std::string new_type);
};

#endif
