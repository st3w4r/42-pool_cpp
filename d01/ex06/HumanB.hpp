/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/16 17:49:22 by ybarbier          #+#    #+#             */
/*   Updated: 2015/06/16 17:49:23 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP

#include <string>
#include "Weapon.hpp"

class Human {

	private:
		std::string _name;

	public:
		HumanB(std::string name);
		~HumanB();

};

#endif // HUMAN_A_HPP
