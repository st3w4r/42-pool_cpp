/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/17 20:49:01 by ybarbier          #+#    #+#             */
/*   Updated: 2015/06/17 20:49:01 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

void Human::meleeAttack(std::string const & target)
{
	std::cout << "Melee Attack on " << target << std::endl;
}

void Human::rangedAttack(std::string const & target)
{
	std::cout << "Ranged Attack on " << target << std::endl;
}

void Human::intimidatingShout(std::string const & target)
{
	std::cout << "Intimidating Shout on " << target << std::endl;
}

void Human::action(std::string const & action_name, std::string const & target)
{
	void (Human::*arrPtrF[3])(std::string const & target) = {
																&Human::meleeAttack,
																&Human::rangedAttack,
																&Human::intimidatingShout
															};

	const std::string arrNameAttack[] = {
											"melee",
											"ranged",
											"intimidating"

										};

	for (int i = 0; i < 3; i++)
	{
		if (arrNameAttack[i].compare(action_name) == 0)
			(this->*arrPtrF[i])(target);
	}
}
