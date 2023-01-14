/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <chajjar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 17:22:49 by chajjar           #+#    #+#             */
/*   Updated: 2023/01/14 17:48:47 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 
#include <string>
#include <iostream>

class Brain
{
private:
	std::string *_ideas;
public:
	Brain(/* args */);
	Brain(const Brain &);
	Brain& operator=(const Brain &);
	~Brain();
};


