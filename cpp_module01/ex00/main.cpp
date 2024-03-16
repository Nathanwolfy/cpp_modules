/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlederge <nlederge@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 16:51:04 by nlederge          #+#    #+#             */
/*   Updated: 2024/03/06 17:03:02 by nlederge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

int	main(void)
{
	//Creating 2 zombies and testing their announce member function
	Zombie Zombie1("Zombie1");
	Zombie Zombie2("Zombie2");

	Zombie1.announce();
	Zombie2.announce();

	//Testing 2 times the randomChump function
	randomChump("Zombie3");
	randomChump("Zombie4");

	/*
	Creating 2 zombies with newZombie function, 
	testing their announce member function for the seonc one,
	and deleting them
	*/
	
	Zombie* Zombie5 = newZombie("Zombie5");
	Zombie* Zombie6 = newZombie("Zombie6");
	Zombie6->announce();
	delete Zombie5;
	delete Zombie6;

	return (0);
}