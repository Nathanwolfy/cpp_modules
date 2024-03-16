/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlederge <nlederge@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 15:22:01 by nlederge          #+#    #+#             */
/*   Updated: 2024/03/14 15:30:02 by nlederge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#define HP_FRAGTRAP 100
#define EP_FRAGTRAP 100
#define AD_FRAGTRAP 30

FragTrap::FragTrap(void) :
	ClapTrap()
{
	this->_hitPoints = HP_FRAGTRAP;
	this->_energyPoints = EP_FRAGTRAP;
	this->_attackDamage = AD_FRAGTRAP;
	std::cout << "FragTrap default constructor called" << std::endl;
	return;
}

FragTrap::FragTrap(std::string name) :
	ClapTrap(name)
{
	this->_hitPoints = HP_FRAGTRAP;
	this->_energyPoints = EP_FRAGTRAP;
	this->_attackDamage = AD_FRAGTRAP;
	std::cout << "FragTrap name constructor called" << std::endl;
	return;
}

FragTrap::FragTrap(const FragTrap& src) :
	ClapTrap(src)
{
	this->_hitPoints = src._hitPoints;
	this->_energyPoints = src._energyPoints;
	this->_attackDamage = src._attackDamage;
	std::cout << "FragTrap copy constructor called" << std::endl;
	return;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap destructor called" << std::endl;
	return;
}

FragTrap&	FragTrap::operator=(const FragTrap& rhs)
{
	this->_name = rhs._name;
	this->_hitPoints = rhs._hitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDamage = rhs._attackDamage;
	return (*this);
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->_name << " requests a high five!" << std::endl;
	return;
}