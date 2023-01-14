/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <chajjar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 13:41:01 by chajjar           #+#    #+#             */
/*   Updated: 2023/01/14 17:13:15 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>

class WrongAnimal
{
protected:
	std::string type;

public:
	WrongAnimal();	
	WrongAnimal(std::string t);
	WrongAnimal(const WrongAnimal &t);
	WrongAnimal& operator=(const WrongAnimal &t);
	virtual void makeSound() const;
	std::string getType() const;
	virtual ~WrongAnimal();
};
