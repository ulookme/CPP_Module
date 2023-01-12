/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <chajjar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 12:00:03 by chajjar           #+#    #+#             */
/*   Updated: 2023/01/12 16:20:08 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//====================Constructor-Destructor===============================//

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

//=========================Operator Egaliter==============================//

Fixed& Fixed::operator=(const Fixed &src)
{
	std::cout << "Copy assignment operator called "<< std::endl;
	_entier = src._entier;
	return *this;
}

bool Fixed::operator==(const Fixed &n){

	return(this->getRawBits() == n.getRawBits());
}

bool Fixed::operator<(const Fixed &n){
	return(this->getRawBits() < n.getRawBits());
}
bool Fixed::operator<=(const Fixed &n){
	return(this->getRawBits() <= n.getRawBits());
}

bool Fixed::operator>(const Fixed &n){
	return(this->getRawBits() > n.getRawBits());
}

bool Fixed::operator>=(const Fixed &n){
	return(this->getRawBits() >= n.getRawBits());
}

bool Fixed::operator!=(const Fixed &n){
	return(this->getRawBits() != n.getRawBits());
}

//==========================Operator decrementation========================//

Fixed&	Fixed::operator++(int){
	Fixed tmp(_entier);
	++_entier;
	return(tmp);
}

Fixed& Fixed::operator++(void)
{
	_entier +=1;
	return (*this);
}

Fixed&	Fixed::operator--(int){
	Fixed tmp(_entier);
	--_entier;
	return(tmp);
}

Fixed& Fixed::operator--(void)
{
	_entier -=1;
	return (*this);
}

//========================Operator Calcul==================================//
Fixed&	Fixed::operator*=(const Fixed &n)
{
	Fixed _entier(*this);
	long tmp1, tmp2;

	tmp1 = 	((long)this->getRawBits());
	tmp2 = 	((long)n.getRawBits());
	_entier.setRawBits((tmp1 * tmp2) / (1 << _bits));
	return (*this);
}

Fixed& Fixed::operator+=(const Fixed &n)
{
	Fixed _entier(*this);
	_entier.setRawBits(this->getRawBits() + n.getRawBits());
	return (*this);
}

Fixed& Fixed::operator-=(const Fixed &n){
	Fixed _entier(*this);
	_entier.setRawBits(this->getRawBits() - n.getRawBits());
	return(*this);
}

Fixed& Fixed::operator/=(const Fixed &n){
	Fixed _entier(*this);
	long tmp1, tmp2;

	tmp1 = 	((long)this->getRawBits());
	tmp2 = 	((long)n.getRawBits());
	_entier.setRawBits((tmp1 * (1 << _bits)) / tmp2);
	return (*this);;
}

//======================= Get Set====================================//

int Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called"<< std::endl;
	return(_entier);
}

void Fixed::setRawBits(int const n){
	std::cout << "setRawBits member function called "<< std::endl;
	_entier = n;
}

//=========================Florat  And Int============================//

float Fixed::toFloat(void) const
{
	return((float)(this->_entier/ (float)(1 << _bits)));
}

int Fixed::toInt(void) const
{
	return(this->_entier >> _bits);
}

//=========================OUtput======================================//

std::ostream& operator<<(std::ostream &out, Fixed const &src)
{
	out<< src.toFloat();
	return(out);
}

//===========================Min & Max=================================//

static Fixed& min(Fixed &a, Fixed &b){
	if(a > b)
		return(b);
	return(a);
}

static const Fixed& min(const Fixed &a, const Fixed &b){
	return(Fixed::min(a, b));
}

static Fixed& max(Fixed &a, Fixed &b){
	if(a > b)
		return(a);
	return(b);
}

static const Fixed& max(const Fixed &a, const Fixed &b){
	return(Fixed::max(a, b));
}
//===========================END===========================================//