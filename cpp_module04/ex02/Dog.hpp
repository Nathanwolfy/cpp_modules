/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlederge <nlederge@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 15:28:55 by nlederge          #+#    #+#             */
/*   Updated: 2024/03/15 16:33:19 by nlederge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog : public AAnimal
{
	public:
		Dog(void);									//Canonical
		Dog(const Dog& src);						//Canonical
		virtual ~Dog(void);							//Canonical

		Dog&	operator=(const Dog& rhs);			//Canonical

		virtual void	makeSound(void) const;

		Brain*	getBrain(void) const;
	
	private:
		Brain*	brain;
};

#endif