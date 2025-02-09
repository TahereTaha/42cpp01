/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tatahere <tatahere@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 13:47:04 by tatahere          #+#    #+#             */
/*   Updated: 2025/02/09 18:01:49 by tatahere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <string>

# define AMOUNT_LEVELS 4

typedef	enum	enum_level
{
	DEBUG,
	INFO,
	WARNING,
	ERROR
}	e_level;

extern	std::string	levels[AMOUNT_LEVELS];
extern	std::string	comments[AMOUNT_LEVELS];

class	Harl
{
	public:

		Harl(void);
		~Harl(void);

		void	complain(std::string level);
		int		set_level_threshold(std::string threshold_level);

	private:
		
		e_level	get_level_num(std::string level);
		int		level_threshold;

		void	(Harl::*complain_action[4])(void);

		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);

};

#endif
