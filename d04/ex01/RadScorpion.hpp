/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/19 13:48:59 by ybarbier          #+#    #+#             */
/*   Updated: 2015/06/19 13:49:00 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RAD_SCORPION_HPP
# define RAD_SCORPION_HPP

#include <iostream>
#include <string>
#include "Enemy.hpp"

class RadScorpion : public Enemy
{
	private:
	public:
		RadScorpion(void);
		RadScorpion(RadScorpion const & src);
		~RadScorpion(void);

		RadScorpion & operator=(RadScorpion const & rhs);

};

#endif // END: RAD_SCORPION_HPP
