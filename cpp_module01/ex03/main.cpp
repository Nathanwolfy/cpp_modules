/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlederge <nlederge@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 18:13:28 by nlederge          #+#    #+#             */
/*   Updated: 2024/03/06 18:18:53 by nlederge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main()
{
	//Test 1 with HumanA from subject
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	//Test 2 with HumanB from subject
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
	//Test 3 with HumanA and HumanB
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		HumanB jim("Jim");
		bob.attack();
		jim.attack();
		jim.setWeapon(club);
		bob.attack();
		jim.attack();
		club.setType("some other type of club");
		bob.attack();
		jim.attack();
	}
	return (0);
}
