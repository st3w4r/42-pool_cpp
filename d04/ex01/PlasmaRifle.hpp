/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/19 13:47:55 by ybarbier          #+#    #+#             */
/*   Updated: 2015/06/19 13:47:56 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PLASMA_RIFLE_HPP
# define PLASMA_RIFLE_HPP

#include <iostream>
#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
	private:
	public:
		PlasmaRifle(void);
		PlasmaRifle(PlasmaRifle const & src);
		~PlasmaRifle(void);

		PlasmaRifle & operator=(PlasmaRifle const & rhs);

		// __Methodes__
		void attack() const;
};

#endif // END: PLASMA_RIFLE_HPP
