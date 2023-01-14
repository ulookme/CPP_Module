/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <chajjar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 10:43:11 by chajjar           #+#    #+#             */
/*   Updated: 2023/01/14 13:24:43 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 
#include "Animal.hpp"

class Cat : public Animal
{
private:
	Cat(void);
public:
	Cat(std::string &t);
	Cat(const Cat &);
	Cat& operator=(const Cat&);
	void makeSound();
	~Cat();
};


