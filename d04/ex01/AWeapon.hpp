/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/19 13:46:26 by ybarbier          #+#    #+#             */
/*   Updated: 2015/06/19 13:46:27 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef AWEAPON_HPP
# define AWEAPON_HPP

#include <string>
#include <iostream>

class AWeapon
{
	private:
		std::string _name;
		int _damage,
			_apcost;
	protected:
		AWeapon(void);
	public:
		AWeapon(AWeapon const & src);
		AWeapon(std::string const & name, int, int);

		virtual ~AWeapon(void);

		AWeapon & operator=(AWeapon const & rhs);

		// __Getter__
		std::string const getName() const;
		int getDamage() const;
		int getAPCost() const;

		// __Setter__
		void setName(std::string);
		void setDamage(int);
		void setAPCost(int);
		virtual void attack() const = 0;
};

#endif // END: AWEAPON_HPP
