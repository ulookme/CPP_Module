/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <chajjar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 17:44:22 by chajjar           #+#    #+#             */
/*   Updated: 2023/01/09 18:58:22 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(){
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;
	std::cout << " L’adresse de la string en mémoire" << &str << std::endl;
	std::cout << " L’adresse de la string en mémoire" << stringPTR << std::endl;
	std::cout << " L’adresse de la string en mémoire" << &stringREF << std::endl;
	std::cout << "------------------------------------"  << std::endl;
	std::cout << str << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;
}