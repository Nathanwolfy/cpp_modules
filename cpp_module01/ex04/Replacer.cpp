/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replacer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlederge <nlederge@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 18:54:54 by nlederge          #+#    #+#             */
/*   Updated: 2024/03/12 16:00:40 by nlederge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replacer.hpp"

Replacer::Replacer(std::string filename, std::string s1, std::string s2) :
	filename(filename),
	s1(s1),
	s2(s2)
{
	return;
}

Replacer::~Replacer(void)
{
	return;
}

void	Replacer::replace(void) const
{
	std::ifstream	ifs(this->filename);
	if (!ifs.is_open())
	{
		std::cout << "Error: could not open file" << std::endl;
		exit(1);
	}
	std::ofstream	ofs(this->filename + ".replace");
	if (!ofs.is_open())
	{
		ifs.close();
		std::cout << "Error: could not create file" << std::endl;
		exit(1);
	}
	
	size_t	pos = 0;
	std::string	buffer;
	
	std::getline(ifs, buffer, '\0');
	pos = pos = buffer.find(this->s1);
	while (pos != std::string::npos)
	{
		buffer.erase(pos, this->s1.length());
		buffer.insert(pos, this->s2);
		pos = buffer.find(this->s1);
	}
	ofs << buffer;
	ifs.close();
	ofs.close();
}
