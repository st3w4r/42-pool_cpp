/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/19 13:49:11 by ybarbier          #+#    #+#             */
/*   Updated: 2015/06/19 13:49:12 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CHARACTER_HPP
# define CHARACTER_HPP

// #include <iostring>
#include <string>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{
	private:
		std::string _name;
		int _ap;
		AWeapon *_weapon;

	protected:
		Character(void);
	public:
		Character(Character const & src);
		Character(std::string const & name);
		~Character(void);

		Character & operator=(Character const & rhs);

		void recoverAP();
		void equip(AWeapon*);
		void attack(Enemy*);

		//__Getter__
		std::string const getName() const;
		int getAP() const;
		AWeapon *getWeapon() const;

};

std::ostream & operator<<(std::ostream & o, Character const & rhs);

#endif // END: CHARACTER_HPP
