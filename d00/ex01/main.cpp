/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/15 16:27:21 by ybarbier          #+#    #+#             */
/*   Updated: 2015/06/15 16:27:22 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "PhoneBook.class.hpp"
/*
void	cmdInterpreation(std::string cmd)
{
	if (cmd.compare("ADD") == 0)
	else if (cmd.compare("SEARCH") == 0)
	else if (cmd.compare("EXIT") == 0)

}*/

int		main(void)
{
	PhoneBook phoneBook;

	phoneBook.start();
	return (0);
}
