/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlederge <nlederge@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 19:08:07 by nlederge          #+#    #+#             */
/*   Updated: 2024/03/06 19:33:05 by nlederge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>
#define NB_LEVELS 7

int		main(void)
{
	Harl	harl;
	std::string	levels_to_test[NB_LEVELS] = {"DEBUG", "INFO", "WARNING", "ERROR", "UNKNOWN_LEVEL", "", "info"};

	for (int i = 0; i < NB_LEVELS; i++)
	{
		std::cout << "Testing with level: " << levels_to_test[i] << std::endl;
		harl.complain(levels_to_test[i]);
	}
	return (0);
}