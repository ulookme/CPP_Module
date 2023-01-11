/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <chajjar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 17:03:50 by chajjar           #+#    #+#             */
/*   Updated: 2023/01/10 21:47:43 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"
#include <iostream>

int main(int argc,char **argv)
{
	if(argc != 4)
	{
		std::cout << "Error: nummber of argument no valid" << std::endl;
		exit(1);
	}

	std::string		newFile(argv[1]);
	newFile.append(".replace");

	Replace file(argv[1], newFile);

	if(!file.is_open())
	{
		std::cout << "Error: read file no complete " << std::endl;
		exit(1);
	}

	std::string		str_init(file.getContent());
	std::string		str_repl = file.replace(str_init, argv[2], argv[3]);

	std::cout << "Avant: " << str_init << std::endl
			<< "\nApres: " << str_repl << std::endl;

	file.setContent(str_repl);
}