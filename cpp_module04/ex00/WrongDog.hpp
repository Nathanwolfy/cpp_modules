/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlederge <nlederge@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 15:22:58 by nlederge          #+#    #+#             */
/*   Updated: 2024/03/15 15:38:45 by nlederge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGDOG_HPP
# define WRONGDOG_HPP

# include "WrongAnimal.hpp"

class WrongDog : public WrongAnimal
{
	public:
		WrongDog(void);									//Canonical
		WrongDog(const WrongDog& src);					//Canonical
		virtual ~WrongDog(void);						//Canonical

		WrongDog&	operator=(const WrongDog& rhs);		//Canonical

		void	makeSound(void) const;
};

#endif