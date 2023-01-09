/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <chajjar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 12:32:48 by chajjar           #+#    #+#             */
/*   Updated: 2023/01/09 16:01:46 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>

class Zombie{
	private:
			std::string _name;
	public:
			Zombie();
			Zombie(std::string);
			~Zombie();
			void annonce();
			
};
void randomChump(std::string name);
Zombie* newZombie(std::string name);
