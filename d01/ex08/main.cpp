/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/17 21:18:52 by ybarbier          #+#    #+#             */
/*   Updated: 2015/06/17 21:18:53 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

int main(void)
{
	Human human;

	human.action("melee", "Paul");
	human.action("ranged", "Zombie");
	human.action("intimidating", "Man");
	human.action("melee", "WARIOR");
	return (0);
}
