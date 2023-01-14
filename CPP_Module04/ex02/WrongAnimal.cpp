/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <chajjar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 13:40:57 by chajjar           #+#    #+#             */
/*   Updated: 2023/01/14 16:37:24 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(/* args */)
{
}

WrongAnimal::WrongAnimal(std::string t)
{
	std::cout << "WrongAnimal type constructor called " << std::endl;
	type = t;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called " << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &t)
{
	std::cout << "WrongAnimal Copie constructor called " << std::endl;
	type = t.type;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &t)
{
	std::cout << "WrongAnimal operator assignement called " << std::endl;
	type = t.type;
	return(*this);
}

void WrongAnimal::makeSound() const{
	
}

std::string  WrongAnimal::getType() const{
	std::cout << "WrongAnimal getType called " << std::endl;
	return(this->type);
}