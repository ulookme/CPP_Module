/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <chajjar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 10:42:52 by chajjar           #+#    #+#             */
/*   Updated: 2023/01/14 18:01:54 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void): Animal("Dog")
{
	std::cout << "Dog Default constructor called "<< std::endl;
	_Brain = new Brain;
}


Dog::~Dog()
{
	std::cout << "Dog destructor called " << std::endl;
	delete _Brain;
}

Dog::Dog(const Dog &t): Animal(t){
	std::cout << "Dog copie constructor called " << std::endl;
	_Brain = new Brain(*t._Brain);
}

Dog& Dog::operator=(const Dog &t)
{
	std::cout << "Dog assignment operator called "<< std::endl;
	Animal::operator=(t);
	*_Brain = *t._Brain;
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "OuaF OUaf " << std::endl;
}