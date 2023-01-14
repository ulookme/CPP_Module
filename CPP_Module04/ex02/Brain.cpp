/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <chajjar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 17:22:32 by chajjar           #+#    #+#             */
/*   Updated: 2023/01/14 17:47:18 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain():_ideas(new std::string[100])
{
	std::cout << "Brain default constructor " << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain default destructor " << std::endl;
	delete[]_ideas;
}

Brain& Brain::operator=(const Brain &id){
	std::cout << "Brain operator assignement " << std::endl;
	for(int i = 0; i < 100; i++)
	{
		_ideas[i] = id._ideas[i]; 
	}
	return(*this);
}

Brain::Brain(const Brain &id){
	std::cout << "Brain copie constructeur " << std::endl;
	_ideas = new std::string[100];
	this->operator=(id);
}