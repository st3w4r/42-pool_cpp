/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/16 11:05:28 by ybarbier          #+#    #+#             */
/*   Updated: 2015/06/16 11:05:29 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie {

	private:
		std::string _name;
		std::string _type;

	public:
		Zombie(std::string _name, std::string _type);
		~Zombie();
		void announce() const;
};

#endif // ZOMBIE_HPP
