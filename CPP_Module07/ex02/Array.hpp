/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajjar <chajjar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 11:56:47 by chajjar           #+#    #+#             */
/*   Updated: 2023/01/18 15:11:29 by chajjar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>

template<typename T>
class Array
{
private:
	T *_array;
	unsigned int _size;
public:
	Array():_array(NULL), _size(0){}
	Array(unsigned int size):_array(new T[size]), _size(size){}
	Array(const Array &t): _array(NULL){
		this = t._size;
	}
	~Array(){
		delete[] this->_array;
	};
	Array& operator=(const Array& t){
		if(this == &t)
			return(*this);
		if(this->_size != t._size)
		{
			if(this->_array != NULL)
				delete[] this->_array;
			this->_array = new T[t._size];
			this->_size = t._size;
		}
		for(unsigned int i; i < this->_size; ++i)
		{
			this->_array[i] = t[i];
		}
		return *this;
	}

	class ArrayIndexInvalide : public std::exception {
			public: virtual const char* what() const throw() {
				return "Invidalid index: index is either bigger than size or less than 0";
			}
		};

	const T& operator[](unsigned int i) const {
		if(i >= this->_size || i < 0)
			throw ArrayIndexInvalide();
		else
			return(this->_array[i]);
	}

	T& operator[](unsigned int i){
		if(i >= this->_size || i < 0)
			throw ArrayIndexInvalide();
		else
			return(this->_array[i]);
	}

	unsigned int size() const{
		return(this->_size);
	}
};
