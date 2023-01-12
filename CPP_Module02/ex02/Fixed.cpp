/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <chajjar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 12:00:03 by chajjar           #+#    #+#             */
/*   Updated: 2023/01/12 18:31:06 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//====================Constructor-Destructor===============================//

Fixed::Fixed ()
{
	_entier = 0;
}

Fixed::Fixed (int num)
{
	_entier = num << _bits;
	
}
Fixed::Fixed( const float num)
{
	_entier = roundf(num * (1 << Fixed::_bits));
}

Fixed::~Fixed()
{
}

Fixed::Fixed(const Fixed &src)
{
	*this = src;
}

//=========================Operator Egaliter==============================//

Fixed& Fixed::operator=(const Fixed &src)
{
	_entier = src._entier;
	return *this;
}

bool Fixed::operator==(const Fixed &n) const {

	return(this->getRawBits() == n.getRawBits());
}

bool Fixed::operator<(const Fixed &n) const {
	return(this->getRawBits() < n.getRawBits());
}
bool Fixed::operator<=(const Fixed &n) const {
	return(this->getRawBits() <= n.getRawBits());
}

bool Fixed::operator>(const Fixed &n) const {
	return(this->getRawBits() > n.getRawBits());
}

bool Fixed::operator>=(const Fixed &n) const {
	return(this->getRawBits() >= n.getRawBits());
}

bool Fixed::operator!=(const Fixed &n) const {
	return(this->getRawBits() != n.getRawBits());
}

//==========================Operator decrementation========================//

Fixed	Fixed::operator++(int){
	Fixed tmp(*this);
	++_entier;
	return(tmp);
}

Fixed Fixed::operator++(void)
{
	_entier++;
	return (*this);
}

Fixed	Fixed::operator--(int){
	Fixed tmp(*this);
	--_entier;
	return(tmp);
}

Fixed Fixed::operator--(void)
{
	_entier--;
	return (*this);
}

//========================Operator Calcul==================================//
Fixed&	Fixed::operator*=(const Fixed &n)
{
	long tmp1, tmp2;

	tmp1 = 	((long)this->getRawBits());
	tmp2 = 	((long)n.getRawBits());
	this->setRawBits((tmp1 * tmp2) / (1 << _bits));
	return (*this);
}

Fixed& Fixed::operator+=(const Fixed &n)
{
	this->setRawBits(this->getRawBits() + n.getRawBits());
	return (*this);
}

Fixed& Fixed::operator-=(const Fixed &n){
	this->setRawBits(this->getRawBits() - n.getRawBits());
	return(*this);
}

Fixed& Fixed::operator/=(const Fixed &n){
	long tmp1, tmp2;

	tmp1 = 	((long)this->getRawBits());
	tmp2 = 	((long)n.getRawBits());
	this->setRawBits((tmp1 * (1 << _bits)) / tmp2);
	return (*this);;
}

//===========================INTERMEDIER OPERATOR===================================//

Fixed	Fixed::operator*(const Fixed &n)
{
	Fixed _entier(*this);
	long tmp1, tmp2;

	tmp1 = 	((long)this->getRawBits());
	tmp2 = 	((long)n.getRawBits());
	_entier.setRawBits((tmp1 * tmp2) / (1 << _bits));
	return (_entier);
}

Fixed Fixed::operator+(const Fixed &n)
{
	Fixed _entier(*this);
	_entier.setRawBits(this->getRawBits() + n.getRawBits());
	return (_entier);
}

Fixed Fixed::operator-(const Fixed &n){
	Fixed _entier(*this);
	_entier.setRawBits(this->getRawBits() - n.getRawBits());
	return(_entier);
}

Fixed Fixed::operator/(const Fixed &n){
	Fixed _entier(*this);
	long tmp1, tmp2;

	tmp1 = 	((long)this->getRawBits());
	tmp2 = 	((long)n.getRawBits());
	_entier.setRawBits((tmp1 * (1 << _bits)) / tmp2);
	return (_entier);;
}


//======================= Get Set====================================//

int Fixed::getRawBits(void) const {
	return(_entier);
}

void Fixed::setRawBits(int const n){
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



Fixed& Fixed::min(Fixed &a, Fixed &b){
	if(a > b)
		return(b);
	return(a);
}

const Fixed& Fixed::min(const Fixed &a, const Fixed &b){
	if(a > b)
		return(b);
	return(a);
}

Fixed& Fixed::max(Fixed &a, Fixed &b){
	if(a > b)
		return(a);
	return(b);
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b){
	if(a > b)
		return(a);
	return(b);
}
//===========================END===========================================//