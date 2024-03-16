/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlederge <nlederge@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 18:20:45 by nlederge          #+#    #+#             */
/*   Updated: 2024/03/06 19:00:39 by nlederge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replacer.hpp"

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		if (argc > 0)
			std::cout << "Usage: " << *argv << " <filename> <string> <string>" << std::endl;
		else
			std::cout << "Usage: ./replace <filename> <string> <string>" << std::endl;
		return (1);
	}
	std::string	filename = argv[1];
	std::string	s1 = argv[2];
	std::string	s2 = argv[3];

	Replacer	replacer(filename, s1, s2);
	replacer.replace();

	return (0);
}