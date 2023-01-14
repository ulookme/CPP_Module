/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <chajjar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 11:57:05 by chajjar           #+#    #+#             */
/*   Updated: 2023/01/14 17:58:08 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void):Animal("Cat"){
	std::cout << "Cat Default constructor called "<< std::endl;
	_Brain = new Brain();
}


Cat::Cat(const Cat &t): Animal(t){
	std::cout << "Cat copie constructor called " << std::endl;
	_Brain = new Brain(*t._Brain);
}

Cat::~Cat()
{
	std::cout << "Cat destructor called " << std::endl;
	delete _Brain;
}

Cat& Cat::operator=(const Cat &t){
	std::cout << "Cat assignment operator called "<< std::endl;
	Animal::operator=(t);
	*_Brain = *t._Brain;
	
	return*this;
}

void Cat::makeSound() const
{
	std::cout << "Miaou MIAAAou " << std::endl;
}