/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlederge <nlederge@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 15:22:10 by nlederge          #+#    #+#             */
/*   Updated: 2024/03/14 15:23:21 by nlederge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class FragTrap : public ClapTrap
{
	public:
		FragTrap(void);									//Canonical
		FragTrap(std::string name);
		FragTrap(const FragTrap& src);					//Canonical
		~FragTrap(void);								//Canonical

		FragTrap&	operator=(const FragTrap& rhs);		//Canonical

		void	highFivesGuys(void);
};

#endif