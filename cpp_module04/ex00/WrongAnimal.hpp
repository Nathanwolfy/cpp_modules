/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlederge <nlederge@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 15:56:25 by nlederge          #+#    #+#             */
/*   Updated: 2024/03/15 15:43:41 by nlederge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include <iostream>
# include <string>

class WrongAnimal
{
	public:
		WrongAnimal(void);									//Canonical
		WrongAnimal(const WrongAnimal& src);				//Canonical
		virtual ~WrongAnimal(void);							//Canonical

		WrongAnimal&	operator=(const WrongAnimal& rhs);	//Canonical

		void	makeSound(void) const;
		
		std::string	getType(void) const;
	
	protected:
		std::string	type;
};

#endif