/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/16 14:50:37 by ybarbier          #+#    #+#             */
/*   Updated: 2015/06/16 14:50:37 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HORDE_HPP
# define ZOMBIE_HORDE_HPP

#include <string>
#include <iostream>
#include "Zombie.hpp"

class ZombieHorde {

	private:
		Zombie *_arrHordeZombies;
		std::string _arrNames[10];
		int _number;

		void _initHorde(int number);
		void _initNames();
		void _randomChump(Zombie *zombie);

	public:
		ZombieHorde(int number);
		~ZombieHorde();

		void annouceHorde();

};

#endif // ZOMBIE_HORDE_HPP
