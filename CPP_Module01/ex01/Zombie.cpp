/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <chajjar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 17:11:53 by chajjar           #+#    #+#             */
/*   Updated: 2023/01/09 17:37:45 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){

};

Zombie::Zombie(std::string n){
	_name = n;
};

Zombie::~Zombie(){

};

void Zombie::annonce(){
	std::cout << _name << ": "<< "BraiiiiiiinnnzzzZ..." << std::endl;
};