/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <chajjar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 12:00:06 by chajjar           #+#    #+#             */
/*   Updated: 2023/01/11 21:27:19 by chajjar          ###   ########.fr       */
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
	Fixed& operator=(const Fixed &);
	~Fixed();
	int getRawBits(void) const;
	void setRawBits(int const n);
};