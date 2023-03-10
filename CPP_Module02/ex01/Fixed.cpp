/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <chajjar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 12:00:03 by chajjar           #+#    #+#             */
/*   Updated: 2023/01/12 09:57:36 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed ()
{
	std::cout << "Default constructor called "<< std::endl;
	_entier = 0;
}

Fixed::Fixed (int num)
{
	std::cout << "Int constructor called "<< std::endl;
	_entier = num << _bits;
	
}
Fixed::Fixed( const float num)
{
	std::cout << "Float constructor called "<< std::endl;
	_entier = roundf(num * (1 << Fixed::_bits));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called "<< std::endl;
}

Fixed::Fixed(const Fixed &src)
{
	std::cout << "Copy constructor called "<< std::endl;
	*this = src;
}

Fixed& Fixed::operator=(const Fixed &src)
{
	std::cout << "Copy assignment operator called "<< std::endl;
	_entier = src._entier;
	return *this;
}

int Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called"<< std::endl;
	return(_entier);
}

void Fixed::setRawBits(int const n){
	std::cout << "setRawBits member function called "<< std::endl;
	_entier = n;
}

float Fixed::toFloat(void) const
{
	return((float)(this->_entier/ (float)(1 << _bits)));
}

int Fixed::toInt(void) const
{
	return(this->_entier >> _bits);
}

std::ostream& operator<<(std::ostream &out, Fixed const &src)
{
	out<< src.toFloat();
	return(out);
}