/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <chajjar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 17:11:57 by chajjar           #+#    #+#             */
/*   Updated: 2023/01/09 17:18:35 by chajjar          ###   ########.fr       */
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
Zombie* zombieHorde( int N, std::string name );