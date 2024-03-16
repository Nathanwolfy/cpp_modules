/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlederge <nlederge@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 18:11:13 by nlederge          #+#    #+#             */
/*   Updated: 2024/03/06 18:15:12 by nlederge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name) :
	name(name)
{
	return;
}

HumanB::~HumanB(void)
{
	return;
}

void	HumanB::attack(void) const
{
	if (this->weapon == NULL)
	{
		std::cout << this->name << " has no weapon to attack with" << std::endl;
		return;
	}
	std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
	return;
}

void	HumanB::setWeapon(Weapon& weapon)
{
	this->weapon = &weapon;
	return;
}
