/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlederge <nlederge@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 18:09:24 by nlederge          #+#    #+#             */
/*   Updated: 2024/03/07 16:50:30 by nlederge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) :
	_lastAddedIndex(8)
{
	//std::cout << "PhoneBook successfully created" << std::endl;
	return;
}

PhoneBook::~PhoneBook(void)
{
	//std::cout << "PhoneBook successfully deleted" << std::endl;
	return;
}

void	PhoneBook::addContact(std::string firstName, std::string lastName, std::string nickname, std::string phoneNumber, std::string darkestSecret)
{
	if (this->_lastAddedIndex == 8)
	{
		this->_lastAddedIndex = 0;
	}
	else
	{
		this->_lastAddedIndex++;
	}
	this->_contacts[this->_lastAddedIndex].setFirstName(firstName);
	this->_contacts[this->_lastAddedIndex].setLastName(lastName);
	this->_contacts[this->_lastAddedIndex].setNickname(nickname);
	this->_contacts[this->_lastAddedIndex].setPhoneNumber(phoneNumber);
	this->_contacts[this->_lastAddedIndex].setDarkestSecret(darkestSecret);
	this->_contacts[this->_lastAddedIndex].setIsEmpty(false);
	std::cout << "Contact of " << firstName << " " << lastName << " successfully added" << std::endl;
}
	

void	displayContactInfo(std::string info)
{
	if (info.length() > 10)
		std::cout << info.substr(0, 9) << ".";
	else
	{
		std::cout << info;
		for (int i = 0; (size_t) i < 10 - info.length(); i++)
			std::cout << " ";
	}
}

void	PhoneBook::displayContacts()
{
	int	i;

	std::cout << "index     |first name|last name |nickname  " << std::endl;
	i = 0;
	while (i < 8)
	{
		if (!this->_contacts[i].getIsEmpty())
		{
			std::cout << i << "         " << "|";
			displayContactInfo(this->_contacts[i].getFirstName());
			std::cout << "|";
			displayContactInfo(this->_contacts[i].getLastName());
			std::cout << "|";
			displayContactInfo(this->_contacts[i].getNickname());
			std::cout << std::endl;
		}
		i++;
	}
}

void	PhoneBook::displayContactInfos(int index)
{
	if (index < 0 || index > 7 || this->_contacts[index].getIsEmpty())
	{
		std::cout << "Invalid index" << std::endl;
		return;
	}
	std::cout << "First name: " << this->_contacts[index].getFirstName() << std::endl;
	std::cout << "Last name: " << this->_contacts[index].getLastName() << std::endl;
	std::cout << "Nickname: " << this->_contacts[index].getNickname() << std::endl;
	std::cout << "Phone number: " << this->_contacts[index].getPhoneNumber() << std::endl;
	std::cout << "Darkest secret: " << this->_contacts[index].getDarkestSecret() << std::endl;
}
