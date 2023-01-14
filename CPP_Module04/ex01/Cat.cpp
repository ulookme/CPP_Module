/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <chajjar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 11:57:05 by chajjar           #+#    #+#             */
/*   Updated: 2023/01/14 16:57:24 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void):Animal("Cat"){
	std::cout << "Cat Default constructor called "<< std::endl;
}


Cat::Cat(const Cat &t): Animal(t){
	std::cout << "Cat copie constructor called " << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called " << std::endl;
}

Cat& Cat::operator=(const Cat &t){
	std::cout << "Cat assignment operator called "<< std::endl;
	Animal::operator=(t);
	
	return*this;
}

void Cat::makeSound() const
{
	std::cout << "Miaou MIAAAou " << std::endl;
}