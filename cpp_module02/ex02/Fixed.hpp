/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlederge <nlederge@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 16:39:08 by nlederge          #+#    #+#             */
/*   Updated: 2024/03/12 17:15:45 by nlederge         ###   ########.fr       */
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
	bool	operator>(const Fixed& rhs);
	bool	operator<(const Fixed& rhs);
	bool	operator==(const Fixed& rhs);
	bool	operator!=(const Fixed& rhs);
	bool	operator>=(const Fixed& rhs);
	bool	operator<=(const Fixed& rhs);
	
	Fixed&	operator+(const Fixed& rhs);
	Fixed&	operator-(const Fixed& rhs);
	Fixed&	operator*(const Fixed& rhs);
	Fixed&	operator/(const Fixed& rhs);
	
	Fixed&	operator++(void);
	Fixed&	operator--(void);
	Fixed	operator++(int);
	Fixed	operator--(int);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);

	float	toFloat(void) const;
	int		toInt(void) const;

	static Fixed&	min(Fixed& a, Fixed& b);
	static Fixed&	max(Fixed& a, Fixed& b);
	static const Fixed&	min(const Fixed& a, const Fixed& b);
	static const Fixed&	max(const Fixed& a, const Fixed& b);
};

std::ostream&	operator<<(std::ostream& os, const Fixed& rhs);

#endif