/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/25 10:20:32 by ybarbier          #+#    #+#             */
/*   Updated: 2015/06/25 10:20:36 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(void)
{
	std::list<int> lst;

	lst.push_back(1);
	lst.push_back(12);
	lst.push_back(42);

	std::cout << "1: " << std::boolalpha << easyfind(lst, 1) << std::endl;
	std::cout << "12: " << std::boolalpha << easyfind(lst ,12) << std::endl;
	std::cout << "42: " << std::boolalpha << easyfind(lst, 42) << std::endl;
	std::cout << "3: " << std::boolalpha << easyfind(lst, 3) << std::endl;
	std::cout << "-3: " << std::boolalpha << easyfind(lst, -3) << std::endl;
	std::cout << "0: " << std::boolalpha << easyfind(lst, 0) << std::endl;
	return (0);
}
