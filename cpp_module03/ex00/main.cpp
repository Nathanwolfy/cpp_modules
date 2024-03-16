/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlederge <nlederge@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 15:38:08 by nlederge          #+#    #+#             */
/*   Updated: 2024/03/13 17:26:56 by nlederge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

int main(void)
{
	ClapTrap 	Unknown;
	ClapTrap 	WillBeJack;
	ClapTrap 	Jack("Jack");
	WillBeJack = Jack;
	ClapTrap 	Davy("Davy");
	ClapTrap	CloneOfJack(Jack);

	WillBeJack.attack("Unknown");
	Unknown.takeDamage(0);
	CloneOfJack.attack("Davy");
	Davy.takeDamage(0);
	
	for (int i = 0; i < 5; i++)
	{
		Jack.attack("Unknown");
	}
	for (int i = 0; i < 6; i++)
	{
		Jack.beRepaired(0);
	}
	for (int i = 0; i < 3; i++)
	{
		Davy.takeDamage(5);
	}

	return (0);
}