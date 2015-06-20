/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/20 22:13:36 by ybarbier          #+#    #+#             */
/*   Updated: 2015/06/20 22:13:37 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AM_HPP
# define AM_HPP

#include "ICharacter.hpp"
#include <string>
#include <iostream>

class AMateria
{
	private:
	protected:
		std::string type_;
		unsigned int xp_;

	public:
		AMateria(void);
		AMateria(AMateria const & src);
		virtual ~AMateria(void);

		AMateria & operator=(AMateria const & rhs);

		std::string const & getType() const; //Returns the materia type
		unsigned int getXP() const; //Returns the Materia's XP
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif // END: AM_HPP
/*
class AMateria
{
	private:
	[...]
	unsigned int xp_;
	public:
	AMateria(std::string const & type);
	[...]
	[...] ~AMateria();
	std::string const & getType() const; //Returns the materia type
	unsigned int getXP() const; //Returns the Materia's XP
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};
*/
