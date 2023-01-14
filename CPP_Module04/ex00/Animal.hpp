/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <chajjar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 10:44:17 by chajjar           #+#    #+#             */
/*   Updated: 2023/01/14 13:26:20 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>

class Animal
{
protected:
	std::string type;
private:
	Animal(void);
	
public:
	Animal(std::string &t);
	Animal(const Animal &);
	~Animal();
	Animal& operator=(const Animal &);
	void makeSound();
	std::string getType(void) const;
};

