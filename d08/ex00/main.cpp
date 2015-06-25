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
#include <list>
#include <vector>

int main(void)
{
	std::list<int> lst;

	lst.push_back(1);
	lst.push_back(12);
	lst.push_back(42);

	std::vector<int> vec;

	vec.push_back(1);
	vec.push_back(12);
	vec.push_back(42);

	std::cout << "__List__" << std::endl;
	std::cout << "1: " << std::boolalpha << easyfind(lst, 1) << std::endl;
	std::cout << "12: " << std::boolalpha << easyfind(lst ,12) << std::endl;
	std::cout << "42: " << std::boolalpha << easyfind(lst, 42) << std::endl;
	std::cout << "3: " << std::boolalpha << easyfind(lst, 3) << std::endl;
	std::cout << "-3: " << std::boolalpha << easyfind(lst, -3) << std::endl;
	std::cout << "0: " << std::boolalpha << easyfind(lst, 0) << std::endl;

	std::cout << "__Vector__" << std::endl;
	std::cout << "1: " << std::boolalpha << easyfind(vec, 1) << std::endl;
	std::cout << "12: " << std::boolalpha << easyfind(vec ,12) << std::endl;
	std::cout << "42: " << std::boolalpha << easyfind(vec, 42) << std::endl;
	std::cout << "3: " << std::boolalpha << easyfind(vec, 3) << std::endl;
	std::cout << "-3: " << std::boolalpha << easyfind(vec, -3) << std::endl;
	std::cout << "0: " << std::boolalpha << easyfind(vec, 0) << std::endl;
	return (0);
}
