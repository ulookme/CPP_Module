/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalaire.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <chajjar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 12:05:29 by chajjar           #+#    #+#             */
/*   Updated: 2023/01/17 15:43:41 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 
#include <string>
#include <iostream>
#include <exception>
#include <cmath>
#include <cstdlib>

class Scalaire
{
private:
	const std::string _value;
	Scalaire();
public:
	Scalaire(const std::string value);
	Scalaire(const Scalaire &t);
	Scalaire& operator=(const Scalaire &t);
	std::string getValue()const;
	void convertType();
	~Scalaire();
	class ImpossibleCharException: public std::exception{
		const char *what(void) const throw();
	};
	class ImpossibleException: public std::exception{
		const char *what(void) const throw();
	};
	class NoDisplay: public std::exception{
		const char *what(void) const throw();
	};
	
};

