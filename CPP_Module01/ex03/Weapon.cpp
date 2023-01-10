/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <chajjar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 19:19:05 by chajjar           #+#    #+#             */
/*   Updated: 2023/01/10 15:17:12 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(){
	
}

Weapon::Weapon(std::string str){
	type = str;
}

Weapon::~Weapon(){
}

const std::string &Weapon::getType(){
	return this->type;
};

const std::string &Weapon::setType(const std::string &other){
	this->type = other;
	return other;
};