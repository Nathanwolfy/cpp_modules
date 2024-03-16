/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlederge <nlederge@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 15:56:31 by nlederge          #+#    #+#             */
/*   Updated: 2024/03/15 16:32:09 by nlederge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(void) :
	type("Unknown animal")
{
	std::cout << "Animal default constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal& src) :
	type(src.type)
{
	std::cout << "AAnimal copy constructor called" << std::endl;
}

AAnimal::~AAnimal(void)
{
	std::cout << "AAnimal destructor called" << std::endl;
}

AAnimal&	AAnimal::operator=(const AAnimal& rhs)
{
	this->type = rhs.type;
	return (*this);
}

std::string	AAnimal::getType(void) const
{
	return (this->type);
}
