/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlederge <nlederge@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 15:56:25 by nlederge          #+#    #+#             */
/*   Updated: 2024/03/15 16:32:42 by nlederge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>
# include <string>

class AAnimal
{
	public:
		AAnimal(void);									//Canonical
		AAnimal(const AAnimal& src);					//Canonical
		virtual ~AAnimal(void);							//Canonical

		AAnimal&	operator=(const AAnimal& rhs);		//Canonical

		virtual void	makeSound(void) const = 0;

		std::string	getType(void) const;
	
	protected:
		std::string	type;
};

#endif