/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <chajjar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 09:22:10 by chajjar           #+#    #+#             */
/*   Updated: 2023/01/11 11:17:23 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Message_system::Message_system(int type)
{
	_type_error = type;
}

Message_system::~Message_system()
{
	
}

void Message_system::messageDebug(int type)
{
	if(type == 1)
		std::cout << "Niveau DEBUG : "<< "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !" << std::endl;
}

void Message_system::messageInfos(int type)
{
	if(type == 2)
	{
		std::cout << "Niveau INFO : "<< "I cannot believe adding extra bacon costs more money. You didn’t put \
		enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
	}
}

void Message_system::messageWarning(int type)
{
	if(type == 3)
	{
		std::cout << "Niveau WARNING : " << "I think I deserve to have some extra bacon for free. I’ve been coming \
		for years whereas you started working here since last month." << std::endl;
	}
}

void Message_system::messageError(int type)
{
	if(type == 4)
		std::cout << "Niveau ERROR : " << "This is unacceptable ! I want to speak to the manager now." << std::endl;
}

