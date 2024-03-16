/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlederge <nlederge@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 17:05:42 by nlederge          #+#    #+#             */
/*   Updated: 2024/03/06 17:15:39 by nlederge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
Zombie*	zombieHorde(int N, std::string name);

int		main(void)
{
	/*
	Use the zombieHorde function to create a horde of zombies
	Check if the horde was created successfully
	Use the announce member function to have all the zombies announce themselves
	Delete the horde
	*/

	int	N = 0;

	Zombie*	horde = zombieHorde(N, "MulhousianZombie");
	if (horde == NULL)
	{
		std::cout << "Invalid number of zombies" << std::endl;
		return (1);
	}
	for (int i = 0; i < N; i++)
		horde[i].announce();
	delete [] horde;
	return (0);
}