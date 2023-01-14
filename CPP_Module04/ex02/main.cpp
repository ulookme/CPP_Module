/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <chajjar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 10:41:02 by chajjar           #+#    #+#             */
/*   Updated: 2023/01/14 18:07:26 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();

std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
i->makeSound(); //will output the cat sound!
j->makeSound();
meta->makeSound();

delete meta;
delete j;
delete i;

std::cout<< "=========2test============"<< std::endl;

const WrongAnimal* meta2 = new WrongAnimal();
const WrongAnimal* y = new WrongCat();

std::cout << y->getType() << " " << std::endl;
y->makeSound(); //will output the cat sound!
meta2->makeSound();

delete meta2;
delete y;

std::cout << "==========test3==========="<< std::endl;
const Animal* r = new Dog();
const Animal* p = new Cat();

delete r;//should not create a leak
delete p;

return 0;
}