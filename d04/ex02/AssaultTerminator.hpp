/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/20 10:21:25 by ybarbier          #+#    #+#             */
/*   Updated: 2015/06/20 10:21:26 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ASSAULT_TERMINATOR_HPP
# define ASSAULT_TERMINATOR_HPP

#include "ISpaceMarine.hpp"
#include <iostream>

class AssaultTerminator : public ISpaceMarine
{
	private:
	public:
		AssaultTerminator(void);
		AssaultTerminator(AssaultTerminator const & src);
		~AssaultTerminator(void);

		AssaultTerminator & operator=(AssaultTerminator const & rhs);

		//__Interface__
		ISpaceMarine* clone() const = 0;
		void battleCry() const = 0;
		void rangedAttack() const = 0;
		void meleeAttack() const = 0;
};

#endif // END: ASSAULT_TERMINATOR_HPP
