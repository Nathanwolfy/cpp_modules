/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlederge <nlederge@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 15:56:31 by nlederge          #+#    #+#             */
/*   Updated: 2024/03/15 16:10:44 by nlederge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) :
	Animal()
{
	std::cout << "Dog default constructor called" << std::endl;
	this->type = "Dog";
	this->brain = new Brain();
}

Dog::Dog(const Dog& src) :
	Animal()
{
	std::cout << "Dog copy constructor called" << std::endl;
	this->type = src.type;
	this->brain = new Brain(*src.brain);
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor called" << std::endl;
	delete this->brain;
}

Dog&	Dog::operator=(const Dog& rhs)
{
	this->type = rhs.type;
	this->brain = rhs.brain;
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "*Wof woof*" << std::endl;
}

Brain*	Dog::getBrain(void) const
{
	return (this->brain);
}
