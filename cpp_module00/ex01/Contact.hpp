/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlederge <nlederge@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 18:09:21 by nlederge          #+#    #+#             */
/*   Updated: 2024/03/04 18:58:39 by nlederge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>
#include <iostream>

class Contact
{
public:
	Contact(void);
	~Contact(void);
	
	void		setIsEmpty(bool isEmpty);
	bool		getIsEmpty(void) const;
	void		setFirstName(std::string firstName);
	std::string	getFirstName(void) const;
	void		setLastName(std::string lastName);
	std::string	getLastName(void) const;
	void		setNickname(std::string nickname);
	std::string	getNickname(void) const;
	void		setPhoneNumber(std::string phoneNumber);
	std::string	getPhoneNumber(void) const;
	void		setDarkestSecret(std::string darkestSecret);
	std::string	getDarkestSecret(void) const;
	
private:
	bool		_isEmpty;
	std::string	_firstName;
	std::string	_lastName;
	std::string	_nickname;
	std::string	_phoneNumber;
	std::string	_darkestSecret;
};

#endif