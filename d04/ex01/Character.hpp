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

		//__Setter__
		// void setName(std::string);
		// void setAP(int);

};

// std::ostream & operator<<(std::ostream & o, Character const & rhs);

#endif // END: CHARACTER_HPP

/*

Posesses 40 AP at creation, loses the AP corresponding to the weapon he has on
each use, and recovers 10 AP upon each call to recoverAP() , up to a maximum
of 40. No AP, no attack

Displays “NAME attacks ENEMY_TYPE with a WEAPON_NAME” upon a call
to attack() , followd by a call to the current weapon’s attack() method. If
there’s no equipped weapon, attack() doesn’t do a thing. You’ll then substract
to the enemy’s HP the damage value of the weapon. After that, if the target has 0
HP or less, you must delete it.


Has a name, a number of AP (Action points), and a pointer to AWeapon representing
the current weapon.

class Character
{
private:
[...]
public:
Character(std::string const & name);

[...]
~Character();
void recoverAP();
void equip(AWeapon*);
void attack(Enemy*);
std::string [...] getName() const;
};
*/
