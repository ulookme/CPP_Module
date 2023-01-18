/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <chajjar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 10:05:10 by chajjar           #+#    #+#             */
/*   Updated: 2023/01/18 11:18:27 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(){
	int arr[4] = {7, 77, 10, 777};
	unsigned int size1  = 2; 
	iter(arr, size1, &printInt);  std::cout << "--------Float--------" << std::endl;
	unsigned int size2 = 5;
	float floatR[5] = { 0.0f, 1.1f, 2.2f, 3.3f, 4.4f };
	iter(floatR, size2, &printInt); std::cout << "--------double--------" << std::endl;

	double doubleR[5] = { 0.00, 1.11, 2.22, 3.33, 4.44 };
	iter(doubleR, size2, &printInt); std::cout << "--------bool--------" << std::endl;
	unsigned int size3 = 2;
	bool boolR[2] = { false, true };
	iter(boolR, size3, &printInt); std::cout << "--------string--------" << std::endl;
	unsigned int size4 = 0;
	std::string stringR[5] = { "phrase 1", "phrase 2", "templates", "are", "fun" };
	iter(stringR, size2, &printInt); std::cout << "--------|string but with size == 2|--------" << std::endl;
	iter(stringR, size3, &printInt); std::cout << "--------|string but with size == 0|--------" << std::endl;
	iter(stringR, size4, &printInt);
	return 0;
}