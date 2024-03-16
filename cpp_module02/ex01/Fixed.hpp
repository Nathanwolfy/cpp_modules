/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlederge <nlederge@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 16:39:08 by nlederge          #+#    #+#             */
/*   Updated: 2024/03/12 17:05:09 by nlederge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
private:
	int					_rawBits;
	static const int	_fractionalBits = 8;
public:
	Fixed(void);								//Canonical
	Fixed(const Fixed& src);					//Canonical
	Fixed(int const raw);
	Fixed(float const raw);
	
	~Fixed(void);								//Canonical
	
	Fixed&	operator=(const Fixed& rhs);		//Canonical

	int		getRawBits(void) const;
	void	setRawBits(int const raw);

	float	toFloat(void) const;
	int		toInt(void) const;
};

std::ostream&	operator<<(std::ostream& os, const Fixed& rhs);

#endif