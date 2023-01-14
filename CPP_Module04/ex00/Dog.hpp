/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <chajjar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 10:42:40 by chajjar           #+#    #+#             */
/*   Updated: 2023/01/14 13:24:19 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 
#include "Animal.hpp"

class Dog : public Animal
{
private:
	Dog(void);
public:
	Dog(std::string &t);
	Dog(const Dog &);
	Dog& operator=(const Dog &);
	void makeSound();
	~Dog();
};
