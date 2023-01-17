/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <chajjar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 17:11:45 by chajjar           #+#    #+#             */
/*   Updated: 2023/01/17 17:57:05 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base* generate(void){
	srand(time(nullptr));
	int r = rand() % 3 ;
	switch (r)
	{
	case 0:
		std::cout << " New generate A class" << std::endl;
		return (new A);
	case 1:
		std::cout << " New generate B class" << std::endl;
		return (new B);
	case 2:
		std::cout << " New generate C class" << std::endl;
		return (new C);
	default:
		std::cout << " Default"<< std::endl;
		break;
	}
	return(NULL);
	
}

void identify(Base *p){
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
}

void identify(Base& p){
	try {
		(void) dynamic_cast<A&>(p);
		std::cout<< "A" << std::endl;
	}catch(...){}
	try {
		(void) dynamic_cast<B&>(p);
		std::cout<< "B" << std::endl;
	}catch(...){}
	try {
		(void) dynamic_cast<C&>(p);
		std::cout<< "C" << std::endl;
	}catch(...){}

}

int main(){
	Base *p;
	p = generate();
	identify(p);
	identify(*p);
	delete p;
}