/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/16 11:05:59 by ybarbier          #+#    #+#             */
/*   Updated: 2015/06/16 11:06:00 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_EVENT_HPP
# define ZOMBIE_EVENT_HPP

#include <iostream>
#include <string>
#include "Zombie.hpp"

class ZombieEvent {

	private:
		std::string _zombieType;
		std::string _arrNames[10];

	public:
		ZombieEvent();
		ZombieEvent(std::string zombieType);
		~ZombieEvent();
		void setZombieType(std::string zombieType);
		Zombie *newZombie(std::string name);
};

#endif // ZOMBIE_EVENT_HPP
