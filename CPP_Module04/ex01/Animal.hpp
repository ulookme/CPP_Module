/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <chajjar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 10:44:17 by chajjar           #+#    #+#             */
/*   Updated: 2023/01/14 17:18:00 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>

class Animal
{
protected:
	std::string type;
	
public:
	Animal(void);
	Animal(std::string t);
	Animal(const Animal &);
	virtual ~Animal();
	Animal& operator=(const Animal &);
	virtual void makeSound() const;
	std::string getType(void) const;
};

