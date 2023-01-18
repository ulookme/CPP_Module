/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <chajjar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 16:49:11 by chajjar           #+#    #+#             */
/*   Updated: 2023/01/18 19:09:49 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <algorithm>
#include <exception>

template<typename T>
typename T::iterator	easyfind(T &cont, int nb){
	typename T::iterator found = std::find(cont.begin(), cont.end(), nb);
	if (found == cont.end())
		throw std::out_of_range("Value couldn't be found!");
	return found;
}

