/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <chajjar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 21:54:25 by chajjar           #+#    #+#             */
/*   Updated: 2023/01/11 11:17:26 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
	Message_system Mes;
	std::string sb;
	unsigned int nb;
	std::cout << "Niveau || DEBUG || " << "input [1]"<<  std::endl;
	std::cout << "Niveau || INFO || " << "input [2]"<< std::endl;
	std::cout << "Niveau || WARNING || " << "input [3]" <<std::endl;
	std::cout << "Niveau || ERROR || " << "input [4]" << std::endl;
	
	while(true)
	{
		std::cout << "Please select a level (1 to 4) or 0 for exit: ";	
		std::cin >> sb;
		nb = atoi(sb.c_str());
		if(nb == 0)
			exit(1);
		if(nb >=1 || nb <=4)
		{
			Mes.messageDebug(nb);
			Mes.messageInfos(nb);
			Mes.messageWarning(nb);
			Mes.messageError(nb);
		}

	}

}
