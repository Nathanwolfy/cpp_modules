/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlederge <nlederge@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 17:33:27 by nlederge          #+#    #+#             */
/*   Updated: 2024/03/14 15:32:52 by nlederge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

int	main(void)
{
	//ClapTrap tests
	ClapTrap 	Unknown1;
	ClapTrap 	WillBeJack;
	ClapTrap 	Jack("Jack");
	WillBeJack = Jack;
	ClapTrap 	Davy("Davy");
	ClapTrap	CloneOfJack(Jack);

	WillBeJack.attack("Unknown1");
	Unknown1.takeDamage(0);
	CloneOfJack.attack("Davy");
	Davy.takeDamage(0);
	
	for (int i = 0; i < 5; i++)
	{
		Jack.attack("Unknown1");
	}
	for (int i = 0; i < 6; i++)
	{
		Jack.beRepaired(0);
	}
	for (int i = 0; i < 3; i++)
	{
		Davy.takeDamage(5);
	}
	
	//ScavTrap tests
	ScavTrap 	Unknown2;
	ScavTrap 	Will("Will");
	ScavTrap 	CloneOfWill(Will);
	ScavTrap 	WillBeWill;
	ScavTrap 	Elizabeth("Elizabeth");

	Unknown2.attack("Will");
	Will.takeDamage(20);
	Will.beRepaired(10);

	WillBeWill = Will;
	WillBeWill.takeDamage(45);
	WillBeWill.takeDamage(45);

	Elizabeth.guardGate();

	//FragTrap tests

	FragTrap 	Unknown3;
	FragTrap 	Barbossa("Barbossa");
	FragTrap 	CloneOfBarbossa(Barbossa);
	FragTrap 	WillBeBarbossa;
	FragTrap 	Gibbs("Gibbs");

	Unknown3.attack("Barbossa");
	Barbossa.takeDamage(30);
	Barbossa.beRepaired(10);

	WillBeBarbossa = Barbossa;
	WillBeBarbossa.takeDamage(40);
	WillBeBarbossa.takeDamage(40);
	CloneOfBarbossa.takeDamage(40);
	CloneOfBarbossa.takeDamage(40);

	Gibbs.highFivesGuys();

	return (0);
}