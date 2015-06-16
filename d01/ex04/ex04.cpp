/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/16 15:58:23 by ybarbier          #+#    #+#             */
/*   Updated: 2015/06/16 15:58:24 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(void)
{
	std::string str = "HI THIS IS BRAIN";

	std::string *ptrStr = &str;
	std::string &refStr = str;

	std::cout << *ptrStr << std::endl;
	std::cout << refStr << std::endl;
}
