/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/20 10:20:49 by ybarbier          #+#    #+#             */
/*   Updated: 2015/06/20 10:20:51 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

#include "ISquad.hpp"
#include <iostream>
#include <string>


class Squad : public ISquad
{
	private:
		struct _sUnit
		{
			int index;
			ISpaceMarine *spaceMarine;
			struct _sUnit *next;
		};
		struct _sUnit * _listUnits;
	public:
		Squad(void);
		Squad(Squad const & src);
		~Squad(void);

		Squad & operator=(Squad const & rhs);

		//__Interface__
		int getCount() const;
		ISpaceMarine* getUnit(int) const;
		int push(ISpaceMarine*);
};

#endif // END: SQUAD_HPP
