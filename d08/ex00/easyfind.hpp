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
