/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Scalaire.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <chajjar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 12:05:25 by chajjar           #+#    #+#             */
/*   Updated: 2023/01/17 16:21:35 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scalaire.hpp"

Scalaire::Scalaire()
{
}

Scalaire::~Scalaire()
{
}

Scalaire::Scalaire(const std::string value):_value(value)
{
}

Scalaire::Scalaire(const Scalaire &t): _value(t._value)
{
}

std::string Scalaire::getValue()const{
	return(this->_value);
}

Scalaire& Scalaire::operator=(const Scalaire &t){
	return(*this);
}

const char* Scalaire::ImpossibleException::what(void) const throw(){
	return("Impossible to Scale data.");
}

const char* Scalaire::NoDisplay::what(void) const throw(){
	return("no display.");
}

const char* Scalaire::ImpossibleCharException::what(void) const throw(){
	return("Char exception");
}

void Scalaire::convertType(){
	std::string specialTypes[6] = {
		"-inff", "+inff", "nanf",
		"-inf", "+inf", "nan"
	};

	std::string	ToChar;
	double		ToDouble;
	float		ToFloat;
	int			ToInt;

	try {
		ToDouble = std::stod(_value);
		std::cout << "double: " << ToDouble<< std::endl;
	} catch (std::exception &e)
		{ throw NoDisplay(); }
	try
	{
		ToFloat = static_cast<float>(ToDouble);
		std::cout << "float: " << ToFloat << "f" << std::endl;
	}
	catch(const std::exception& e)
	{	
		throw ImpossibleException();		
	}
	try{
		if (static_cast<char>(ToDouble) == ToDouble)
			ToChar = static_cast<char>(ToDouble);
		else
			ToChar = "Impossible";
		if (!std::isprint(ToChar[0]))
			ToChar = "Non Imprimable";
		for (int i = 0; i < 6; ++i)
		{
			if (_value == specialTypes[i])
			{
				ToChar = "imposible";
				break;
			}
		}
		std::cout << "char: " << ToChar << std::endl;
	}catch(std::exception &e)
	{throw ImpossibleCharException();}
	try
	{
		ToInt = static_cast<int>(ToDouble);
		std::cout << "int: " << ToInt << std::endl;
	}
	catch(const std::exception& e)
	{	
		throw ImpossibleException();		
	}
}