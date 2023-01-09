/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <chajjar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 18:29:39 by chajjar           #+#    #+#             */
/*   Updated: 2023/01/09 08:57:20 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int main(){
	PhoneBook phone;
	std::string input;

	std::cout << "Input ADD or SEARCH or EXIT to phonebook ?" << std::endl;

	while(true)
	{
		std::cout << "$> ";
		std::cin >> input;
		if(input == "ADD")
		{
			phone.add();
			std::cout << "Input ADD or SEARCH or EXIT to phonebook ?" << std::endl;
		}
		else if(input == "SEARCH")
		{
			phone.search();
			std::cout << "Input ADD or SEARCH or EXIT to phonebook ?" << std::endl;
		}
		else if (input == "EXIT")
			return(0);
	}
}