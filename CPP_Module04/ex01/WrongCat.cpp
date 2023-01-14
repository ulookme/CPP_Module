/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <chajjar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 16:44:05 by chajjar           #+#    #+#             */
/*   Updated: 2023/01/14 17:07:18 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(): WrongAnimal("WrongCat")
{
	std::cout << "WrongCat Default constructor called " << std::endl;
}

WrongCat::WrongCat(const WrongCat &t): WrongAnimal(t){
	std::cout << "WrongCat copie constructor called " << std::endl;
}


WrongCat& WrongCat::operator=(const WrongCat &t){
	std::cout << "WrongCat assignment operator called "<< std::endl;
	WrongAnimal::operator=(t);
	
	return*this;
}

void WrongCat::makeSound() const
{
	std::cout << "C'est pas  MIAAAou  WronCat" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Destructor called " << std::endl;
}
