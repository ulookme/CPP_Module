/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <chajjar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 12:00:03 by chajjar           #+#    #+#             */
/*   Updated: 2023/01/11 18:31:33 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed ():_entier(0)
{
	std::cout << "Default constructor called "<< std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called "<< std::endl;
}

Fixed::Fixed(const Fixed &src):
	_entier(src._entier)
{
	std::cout << "Copy constructor called "<< std::endl;
}

Fixed& Fixed::operator=(const Fixed &src)
{
	std::cout << "Copy assignment operator called "<< std::endl;
	_entier = src.getRawBits();
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