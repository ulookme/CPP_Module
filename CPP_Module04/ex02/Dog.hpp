/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <chajjar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 10:42:40 by chajjar           #+#    #+#             */
/*   Updated: 2023/01/14 17:53:59 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
	Brain *_Brain;
		
public:
	Dog(void);
	Dog(const Dog &);
	Dog& operator=(const Dog &);
	void makeSound() const;
	~Dog();
};
