/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/17 20:49:05 by ybarbier          #+#    #+#             */
/*   Updated: 2015/06/17 20:49:05 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
#define HUMAN_HPP

#include <iostream>

class Human
{
	private:
		void meleeAttack(std::string const & target);
		void rangedAttack(std::string const & target);
		void intimidatingShout(std::string const & target);
	public:
		void action(std::string const & action_name, std::string const & target);
};

#endif /* end of include guard: HUMAN_HPP */
