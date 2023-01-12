/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <chajjar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 12:00:06 by chajjar           #+#    #+#             */
/*   Updated: 2023/01/12 18:08:36 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include <cmath>

class Fixed
{
private:
	int _entier;
	static const int _bits = 8;
	
public:
	Fixed();
	Fixed(const Fixed &);
	Fixed(int num);
	Fixed(const float num);
	Fixed& operator=(const Fixed &);
	~Fixed();
	int getRawBits(void) const;
	void setRawBits(int const n);
	float toFloat(void) const;
	int toInt(void) const;
	//operation 
	Fixed& operator+=(const Fixed &n);
	Fixed& operator-=(const Fixed &n);
	Fixed& operator*=(const Fixed &n);
	Fixed& operator/=(const Fixed &n);
	Fixed operator+(const Fixed &n);
	Fixed operator-(const Fixed &n);
	Fixed operator*(const Fixed &n);
	Fixed operator/(const Fixed &n);
	//decrementation et incrementation
	Fixed operator++(int);
	Fixed operator++(void);
	Fixed operator--(int);
	Fixed operator--(void);
	//operateur booleen
	bool operator==(const Fixed &n) const;
	bool operator<(const Fixed &n) const;
	bool operator<=(const Fixed &n) const;
	bool operator>(const Fixed &n) const;
	bool operator>=(const Fixed &n) const;
	bool operator!=(const Fixed &n) const;
	//min & max
	static const Fixed& min(const Fixed &a, const Fixed &b);
	static Fixed& min(Fixed &a, Fixed &b);
	static const Fixed& max(const Fixed &a, const Fixed &b);
	static Fixed& max(Fixed &a, Fixed &b);
};
std::ostream& operator<<(std::ostream &out, Fixed const &src);