/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlederge <nlederge@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 18:09:12 by nlederge          #+#    #+#             */
/*   Updated: 2024/03/07 16:50:59 by nlederge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

static int	isNumber(const std::string &str)
{
	for (int i = 0; (size_t) i < str.length(); i++)
	{
		if (!std::isdigit(str[i]))
		{
			return (0);
		}
	}
	return (1);
}

int	main(void)
{
	PhoneBook	phoneBook;

	while (true)
	{
		if (std::cin.eof())
		{
			break;
		}
		std::string command;
		std::cout << "Enter a command: ";
		std::cin >> command;
		if (command == "ADD")
		{
			std::string firstName;
			std::string lastName;
			std::string nickname;
			std::string phoneNumber;
			std::string darkestSecret;
			std::cout << "Enter first name: ";
			std::cin >> firstName;
			if (firstName.empty())
			{
				std::cout << "Invalid first name" << std::endl;
				continue;
			}
			std::cout << "Enter last name: ";
			std::cin >> lastName;
			if (lastName.empty())
			{
				std::cout << "Invalid last name" << std::endl;
				continue;
			}
			std::cout << "Enter nickname: ";
			std::cin >> nickname;
			if (nickname.empty())
			{
				std::cout << "Invalid nickname" << std::endl;
				continue;
			}
			std::cout << "Enter phone number: ";
			std::cin >> phoneNumber;
			if (phoneNumber.empty())
			{
				std::cout << "Invalid phone number" << std::endl;
				continue;
			}
			std::cout << "Enter darkest secret: ";
			std::cin >> darkestSecret;
			if (darkestSecret.empty())
			{
				std::cout << "Invalid darkest secret" << std::endl;
				continue;
			}
			phoneBook.addContact(firstName, lastName, nickname, phoneNumber, darkestSecret);
		}
		else if (command == "SEARCH")
		{
			phoneBook.displayContacts();
			std::string index;
			std::cout << "Enter an index: ";
			std::cin >> index;
			if (index.empty() || !isNumber(index))
			{
				std::cout << "Invalid index" << std::endl;
				continue;
			}
			phoneBook.displayContactInfos(std::stoi(index));
		}
		else if (command == "EXIT")
		{
			break;
		}
		else
		{
			std::cout << "Invalid command" << std::endl;
		}
	}
}