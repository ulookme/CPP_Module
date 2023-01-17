/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <chajjar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 16:45:29 by chajjar           #+#    #+#             */
/*   Updated: 2023/01/17 17:08:18 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

uintptr_t serialize(Data *ptr)
{
	return(reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
	return(reinterpret_cast<Data*>(raw));
}

int main(){
	Data* data;
	uintptr_t raw;
	Data* val_retour;
	raw = serialize(data);
	std::cout << " serialize : " << raw << std::endl;
	val_retour = deserialize(raw);
	std::cout << " deserialize : " << val_retour << std::endl;
}