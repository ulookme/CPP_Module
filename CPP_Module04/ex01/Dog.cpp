/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <chajjar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 10:42:52 by chajjar           #+#    #+#             */
/*   Updated: 2023/01/14 16:57:32 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void): Animal("Dog")
{
	std::cout << "Dog Default constructor called "<< std::endl;
}


Dog::~Dog()
{
	std::cout << "Dog destructor called " << std::endl;
}

Dog::Dog(const Dog &t): Animal(t){
	std::cout << "Dog copie constructor called " << std::endl;
}

Dog& Dog::operator=(const Dog &t)
{
	std::cout << "Dog assignment operator called "<< std::endl;
	Animal::operator=(t);
	return *this;
}
void Dog::makeSound() const
{
	std::cout << "OuaF OUaf " << std::endl;
}