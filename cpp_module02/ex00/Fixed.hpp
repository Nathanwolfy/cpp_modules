/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlederge <nlederge@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 16:39:08 by nlederge          #+#    #+#             */
/*   Updated: 2024/03/12 16:59:33 by nlederge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
private:
	int					_rawBits;
	static const int	_fractionalBits = 8;
public:
	Fixed(void);								//Canonical
	Fixed(const Fixed& src);					//Canonical
	
	~Fixed(void);								//Canonical
	
	Fixed&	operator=(const Fixed& rhs);		//Canonical

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
};

#endif