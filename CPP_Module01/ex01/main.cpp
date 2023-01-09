/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <chajjar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 17:10:50 by chajjar           #+#    #+#             */
/*   Updated: 2023/01/09 17:38:58 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(){
	int n = 12;
	Zombie *Zom;
	Zom = zombieHorde(n, "horbe");
	for(int i = 0; i < n; i++){
		Zom[i].annonce();
	}
	delete []Zom;
}