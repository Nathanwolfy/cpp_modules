/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlederge <nlederge@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 15:47:37 by nlederge          #+#    #+#             */
/*   Updated: 2024/03/15 16:16:37 by nlederge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

class Brain
{
public:
	Brain(void);									//Canonical	
	Brain(const Brain& src);						//Canonical
	virtual ~Brain(void);							//Canonical

	Brain&	operator=(const Brain& rhs);			//Canonical

	std::string	ideas[100];

	const std::string	*getIdeas(void) const;
};

#endif
