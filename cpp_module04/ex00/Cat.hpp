/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlederge <nlederge@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 15:22:58 by nlederge          #+#    #+#             */
/*   Updated: 2024/03/15 15:23:35 by nlederge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat(void);									//Canonical
		Cat(const Cat& src);						//Canonical
		virtual ~Cat(void);							//Canonical

		Cat&	operator=(const Cat& rhs);			//Canonical

		virtual void	makeSound(void) const;
};

#endif