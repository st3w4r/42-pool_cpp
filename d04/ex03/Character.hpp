/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/20 22:14:27 by ybarbier          #+#    #+#             */
/*   Updated: 2015/06/20 22:14:30 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "AMateria.hpp"
#include <string>
#include <iostream>

class Character : public ICharacter
{
	private:
		// AMateria invetory[4];
		std::string _name;
	public:
		Character(void);
		Character(Character const & src);
		~Character(void);

		Character & operator=(Character const & rhs);

		//__Interface__
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};

#endif // END: CHARACTER_HPP
