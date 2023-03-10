/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <chajjar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 10:05:03 by chajjar           #+#    #+#             */
/*   Updated: 2023/01/18 11:15:34 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include<iostream>
#include<string>

template <typename T, typename N>
void	iter(T *arr, N &size, void (*f)(T const &val))
{
	for (int i = 0; i < size; i++)
		(*f)(arr[i]);
}

template <typename T>
void printInt(T const &val)
{
	std::cout << val << std::endl;
}