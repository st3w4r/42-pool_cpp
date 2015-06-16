/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/16 17:49:40 by ybarbier          #+#    #+#             */
/*   Updated: 2015/06/16 17:49:41 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_A_HPP
# define WEAPON_A_HPP

#include <string>


class Weapon {

	private:
		std::string _type;

	public:
		Weapon(std::string type);
		~Weapon();

		std::string setType();

};

#endif // WEAPON_A_HPP
