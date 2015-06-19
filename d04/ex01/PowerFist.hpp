/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/19 13:48:20 by ybarbier          #+#    #+#             */
/*   Updated: 2015/06/19 13:48:21 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef POWER_FIST_HPP
# define POWER_FIST_HPP

#include <iostream>
#include "AWeapon.hpp"

class PowerFist : public AWeapon
{
	private:
	public:
		PowerFist(void);
		PowerFist(PowerFist const & src);
		~PowerFist(void);

		PowerFist & operator=(PowerFist const & rhs);

		// __Methodes__
		void attack() const;
};

#endif // END: POWER_FIST_HPP
