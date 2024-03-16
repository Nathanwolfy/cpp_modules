/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlederge <nlederge@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 17:33:21 by nlederge          #+#    #+#             */
/*   Updated: 2024/03/14 15:31:31 by nlederge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#define HP_SCAVTRAP 100
#define EP_SCAVTRAP 50
#define AD_SCAVTRAP 20

ScavTrap::ScavTrap(void) :
	ClapTrap()
{
	this->_hitPoints = HP_SCAVTRAP;
	this->_energyPoints = EP_SCAVTRAP;
	this->_attackDamage = AD_SCAVTRAP;
	std::cout << "ScavTrap default constructor called" << std::endl;
	return;
}

ScavTrap::ScavTrap(std::string name) :
	ClapTrap(name)
{
	this->_hitPoints = HP_SCAVTRAP;
	this->_energyPoints = EP_SCAVTRAP;
	this->_attackDamage = AD_SCAVTRAP;
	std::cout << "ScavTrap name constructor called" << std::endl;
	return;
}

ScavTrap::ScavTrap(const ScavTrap& src) :
	ClapTrap(src)
{
	this->_hitPoints = src._hitPoints;
	this->_energyPoints = src._energyPoints;
	this->_attackDamage = src._attackDamage;
	std::cout << "ScavTrap copy constructor called" << std::endl;
	return;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap destructor called" << std::endl;
	return;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& rhs)
{
	this->_name = rhs._name;
	this->_hitPoints = rhs._hitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDamage = rhs._attackDamage;
	return (*this);
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode." << std::endl;
	return;
}