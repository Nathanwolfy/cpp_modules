/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlederge <nlederge@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 16:39:06 by nlederge          #+#    #+#             */
/*   Updated: 2024/03/12 17:20:54 by nlederge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed(void) :
	_rawBits(0)
{
	return;
}

Fixed::Fixed(const Fixed& src)
{
	this->setRawBits(src.getRawBits());
	return;
}

Fixed::Fixed(const int raw)
{
	this->setRawBits(raw << this->_fractionalBits);
	return;
}

Fixed::Fixed(const float raw)
{
	this->setRawBits((int)roundf(raw * (1 << this->_fractionalBits)));
	return;
}

Fixed::~Fixed(void)
{
	return;
}

Fixed&	Fixed::operator=(const Fixed& rhs)
{
	this->setRawBits(rhs.getRawBits());
	return (*this);
}

bool	Fixed::operator>(const Fixed& rhs)
{
	return (this->getRawBits() > rhs.getRawBits());
}

bool	Fixed::operator<(const Fixed& rhs)
{
	return (this->getRawBits() < rhs.getRawBits());
}

bool	Fixed::operator==(const Fixed& rhs)
{
	return (this->getRawBits() == rhs.getRawBits());
}

bool	Fixed::operator!=(const Fixed& rhs)
{
	return (!(*this == rhs));
}

bool	Fixed::operator>=(const Fixed& rhs)
{
	return ((this->getRawBits() >= rhs.getRawBits()) || (*this == rhs));
}

bool	Fixed::operator<=(const Fixed& rhs)
{
	return ((this->getRawBits() <= rhs.getRawBits()) || (*this == rhs));
}

Fixed&	Fixed::operator+(const Fixed& rhs)
{
	this->setRawBits(this->getRawBits() + rhs.getRawBits());
	return (*this);
}

Fixed&	Fixed::operator-(const Fixed& rhs)
{
	this->setRawBits(this->getRawBits() - rhs.getRawBits());
	return (*this);
}

Fixed&	Fixed::operator*(const Fixed& rhs)
{
	this->setRawBits((this->getRawBits() * rhs.getRawBits()) >> this->_fractionalBits);
	return (*this);
}

Fixed&	Fixed::operator/(const Fixed& rhs)
{
	this->setRawBits((this->getRawBits() << this->_fractionalBits) / rhs.getRawBits());
	return (*this);
}

Fixed&	Fixed::operator++(void)
{
	this->setRawBits(this->getRawBits() + 1);
	return (*this);
}

Fixed&	Fixed::operator--(void)
{
	this->setRawBits(this->getRawBits() - 1);
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	incr(*this);
	this->setRawBits(this->getRawBits() + 1);
	return (incr);
}

Fixed	Fixed::operator--(int)
{
	Fixed	decr(*this);
	this->setRawBits(this->getRawBits() - 1);
	return (decr);
}

int		Fixed::getRawBits(void) const
{
	return (this->_rawBits);
}

void	Fixed::setRawBits(int const raw)
{
	this->_rawBits = raw;
	return;
}

float	Fixed::toFloat(void) const
{
	return ((float)this->getRawBits() / (1 << this->_fractionalBits));
}

int		Fixed::toInt(void) const
{
	return (this->getRawBits() >> this->_fractionalBits);
}

std::ostream&	operator<<(std::ostream& os, const Fixed& rhs)
{
	os << rhs.toFloat();
	return (os);
}

Fixed&	Fixed::min(Fixed& a, Fixed& b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

Fixed&	Fixed::max(Fixed& a, Fixed& b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

const Fixed&	Fixed::min(const Fixed& a, const Fixed& b)
{
	Fixed tmp1(a);
	Fixed tmp2(b);
	if (tmp1 < tmp2)
		return (a);
	else
		return (b);
}

const Fixed&	Fixed::max(const Fixed& a, const Fixed& b)
{
	Fixed tmp1(a);
	Fixed tmp2(b);
	if (tmp1 > tmp2)
		return (a);
	else
		return (b);
}
