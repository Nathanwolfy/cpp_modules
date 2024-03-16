/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlederge <nlederge@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 18:09:17 by nlederge          #+#    #+#             */
/*   Updated: 2024/03/04 18:57:57 by nlederge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void) :
	_isEmpty(true),
	_firstName(""),
	_lastName(""),
	_nickname(""),
	_phoneNumber(""),
	_darkestSecret("")
{
	return;
}

Contact::~Contact(void)
{
	return;
}

void	Contact::setIsEmpty(bool isEmpty)
{
	this->_isEmpty = isEmpty;
}

bool	Contact::getIsEmpty(void) const
{
	return (this->_isEmpty);
}

void	Contact::setFirstName(std::string firstName)
{
	this->_firstName = firstName;
}

std::string	Contact::getFirstName(void) const
{
	return (this->_firstName);
}

void	Contact::setLastName(std::string lastName)
{
	this->_lastName = lastName;
}

std::string	Contact::getLastName(void) const
{
	return (this->_lastName);
}

void	Contact::setNickname(std::string nickname)
{
	this->_nickname = nickname;
}

std::string	Contact::getNickname(void) const
{
	return (this->_nickname);
}

void	Contact::setPhoneNumber(std::string phoneNumber)
{
	this->_phoneNumber = phoneNumber;
}

std::string	Contact::getPhoneNumber(void) const
{
	return (this->_phoneNumber);
}

void	Contact::setDarkestSecret(std::string darkestSecret)
{
	this->_darkestSecret = darkestSecret;
}

std::string	Contact::getDarkestSecret(void) const
{
	return (this->_darkestSecret);
}

