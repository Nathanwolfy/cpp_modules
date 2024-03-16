/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlederge <nlederge@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 15:56:31 by nlederge          #+#    #+#             */
/*   Updated: 2024/03/15 16:33:04 by nlederge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) :
	AAnimal()
{
	std::cout << "Cat default constructor called" << std::endl;
	this->type = "Cat";
	this->brain = new Brain();
}

Cat::Cat(const Cat& src) :
	AAnimal()
{
	std::cout << "Cat copy constructor called" << std::endl;
	this->type = src.type;
	this->brain = new Brain(*src.brain);
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called" << std::endl;
	delete this->brain;
}

Cat&	Cat::operator=(const Cat& rhs)
{
	this->type = rhs.type;
	this->brain = rhs.brain;
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "*Meeooowww*" << std::endl;
}

Brain*	Cat::getBrain(void) const
{
	return (this->brain);
}