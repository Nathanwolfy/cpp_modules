/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlederge <nlederge@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 15:56:31 by nlederge          #+#    #+#             */
/*   Updated: 2024/03/15 16:10:18 by nlederge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongDog.hpp"

WrongDog::WrongDog(void) :
	WrongAnimal()
{
	this->type = "WrongDog";
	std::cout << "WrongDog default constructor called" << std::endl;
}

WrongDog::WrongDog(const WrongDog& src) :
	WrongAnimal()
{
	this->type = src.type;
	std::cout << "WrongDog copy constructor called" << std::endl;
}

WrongDog::~WrongDog(void)
{
	std::cout << "WrongDog destructor called" << std::endl;
}

WrongDog&	WrongDog::operator=(const WrongDog& rhs)
{
	this->type = rhs.type;
	return (*this);
}

void	WrongDog::makeSound(void) const
{
	std::cout << "*Wof woof*" << std::endl;
}
