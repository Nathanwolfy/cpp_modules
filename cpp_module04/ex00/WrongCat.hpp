/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlederge <nlederge@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 15:22:58 by nlederge          #+#    #+#             */
/*   Updated: 2024/03/15 15:37:40 by nlederge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		WrongCat(void);									//Canonical
		WrongCat(const WrongCat& src);					//Canonical
		virtual ~WrongCat(void);						//Canonical

		WrongCat&	operator=(const WrongCat& rhs);		//Canonical

		void	makeSound(void) const;
};

#endif