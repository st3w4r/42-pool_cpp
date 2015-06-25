/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/25 10:18:49 by ybarbier          #+#    #+#             */
/*   Updated: 2015/06/25 10:18:51 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASY_FIND_HPP
# define EASY_FIND_HPP

#include <list>
#include <iostream>

template<typename T>
bool easyfind(T lst, int n)
{
	typename T::iterator it;

	it = std::find(lst.begin(), lst.end(), n);
	if(it == lst.end())
		return false;
	return true;
}

#endif // END: EASY_FIND_HPP
