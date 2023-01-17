/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <chajjar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 12:05:21 by chajjar           #+#    #+#             */
/*   Updated: 2023/01/17 15:43:49 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Scalaire.hpp"

int main(int arc, char **arv){
	if(arc > 1)
	{
		char *str = arv[1];
		Scalaire a(str);
		a.convertType();
		//std::cout << a << std::endl;
	}
	else
		std::cout << "rien en se moment" << std::endl;
	return(0);
}