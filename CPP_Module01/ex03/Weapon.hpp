/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <chajjar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 19:19:00 by chajjar           #+#    #+#             */
/*   Updated: 2023/01/10 15:16:28 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>

class Weapon{
	private:
	std::string type;

	public:
	Weapon();
	Weapon(std::string str);
	~Weapon();
	const std::string &getType();
	const std::string &setType(const std::string &other);
	
};