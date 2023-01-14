/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <chajjar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 10:43:11 by chajjar           #+#    #+#             */
/*   Updated: 2023/01/14 17:53:46 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
	Brain *_Brain;
public:
	Cat(void);
	Cat(const Cat &);
	Cat& operator=(const Cat&);
	void makeSound() const;
	~Cat();
};


