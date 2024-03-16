/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlederge <nlederge@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 15:28:55 by nlederge          #+#    #+#             */
/*   Updated: 2024/03/15 15:30:50 by nlederge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog(void);									//Canonical
		Dog(const Dog& src);						//Canonical
		virtual ~Dog(void);							//Canonical

		Dog&	operator=(const Dog& rhs);			//Canonical

		virtual void	makeSound(void) const;
};

#endif