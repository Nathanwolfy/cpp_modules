/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlederge <nlederge@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 15:56:31 by nlederge          #+#    #+#             */
/*   Updated: 2024/03/15 16:31:02 by nlederge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) :
	type("Unknown aanimal")
{
	std::cout << "AAnimal default constructor called" << std::endl;
}

Animal::Animal(const Animal& src) :
	type(src.type)
{
	std::cout << "AAnimal copy constructor called" << std::endl;
}

Animal::~Animal(void)
{
	std::cout << "AAnimal destructor called" << std::endl;
}

Animal&	Animal::operator=(const Animal& rhs)
{
	this->type = rhs.type;
	return (*this);
}

void	Animal::makeSound(void) const
{
	std::cout << "*Animal sound*" << std::endl;
}

std::string	Animal::getType(void) const
{
	return (this->type);
}
