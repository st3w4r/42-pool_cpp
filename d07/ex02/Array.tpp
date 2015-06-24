/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/24 16:30:23 by ybarbier          #+#    #+#             */
/*   Updated: 2015/06/24 16:30:23 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP

#include <string>
#include <iostream>

template<typename T>

class Array
{
	private:
		T * _arr;
		unsigned int _size;
	public:
		Array<T>(void)
		{
			*_arr = NULL;
			return;
		}
		Array<T>(Array const & src)
		{
			*this = src;
			return;
		}
		Array<T>(unsigned int n)
		{
			_size = n;
			_arr = new T[n];
		}
		~Array<T>(void)
		{
			return;
		}

		Array & operator=(Array const & rhs)
		{
			_size = rhs.size;
			_arr = new T[_size];

			for (size_t i = 0; i < _size; i++)
			{
				_arr[i] = rhs._arr[i];
			}
			return *this;
		}

		unsigned int size()
		{
			return _size;
		}

		T & operator[](unsigned int i)
		{
			if (i > (_size - 1))
				throw std::exception();
			return _arr[i];
		}
};

#endif // END: ARRAY_TPP
