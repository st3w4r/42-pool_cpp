/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/16 17:49:26 by ybarbier          #+#    #+#             */
/*   Updated: 2015/06/16 17:49:29 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
# define HUMAN_A_HPP

#include <string>
#include <Weapon.hpp>

class HumanA {

	private:
		std::string name;
		Weapon _club;

	public:
		HumanA(std:string name, Weapon clud);
		~HumanA();
};

#endif // HUMAN_A_HPP
