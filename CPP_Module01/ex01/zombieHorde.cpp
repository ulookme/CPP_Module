/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <chajjar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 17:11:49 by chajjar           #+#    #+#             */
/*   Updated: 2023/01/09 17:26:46 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
Zombie* zombieHorde( int N, std::string name ){
	Zombie *Zom = new Zombie[N];
	for(int i = 0; i < N; i++){
		Zom[i] = Zombie(name);
	}
	return(Zom);
}