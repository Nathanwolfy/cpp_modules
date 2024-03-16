/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlederge <nlederge@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 17:33:12 by nlederge          #+#    #+#             */
/*   Updated: 2024/03/13 18:02:31 by nlederge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap(void);									//Canonical
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap& src);					//Canonical
		~ScavTrap(void);								//Canonical

		ScavTrap&	operator=(const ScavTrap& rhs);		//Canonical

		void	guardGate(void);
};

#endif