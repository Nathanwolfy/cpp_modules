/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlederge <nlederge@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 15:56:25 by nlederge          #+#    #+#             */
/*   Updated: 2024/03/15 15:42:31 by nlederge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>
# include <string>

class Animal
{
	public:
		Animal(void);									//Canonical
		Animal(const Animal& src);						//Canonical
		virtual ~Animal(void);							//Canonical

		Animal&	operator=(const Animal& rhs);			//Canonical

		virtual void	makeSound(void) const;

		std::string	getType(void) const;
	
	protected:
		std::string	type;
};

#endif