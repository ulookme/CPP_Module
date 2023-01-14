/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <chajjar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 10:44:13 by chajjar           #+#    #+#             */
/*   Updated: 2023/01/14 16:43:54 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
}

Animal::Animal(std::string t){
	std::cout << "Animal type constructor called " << std::endl;
	type = t;
}
Animal::Animal(const Animal &t)
{
	std::cout << "Animal Copie constructor called " << std::endl;
	type = t.type;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called " << std::endl;
}

Animal& Animal::operator=(const Animal &t){
	type = t.type;
	return(*this);
}

void Animal::makeSound() const{
	
}

std::string Animal::getType(void) const{
	std::cout << "Animal getType called " << std::endl;
	return(this->type);
}
