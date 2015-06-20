/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISquad.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/20 10:21:55 by ybarbier          #+#    #+#             */
/*   Updated: 2015/06/20 10:21:58 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef I_SQUAD_HPP
# define I_SQUAD_HPP

#include "ISpaceMarine.hpp"

class ISquad
{
	public:
		virtual ~ISquad() {}
		virtual int getCount() const = 0;
		virtual ISpaceMarine* getUnit(int) const = 0;
		virtual int push(ISpaceMarine*) = 0;
};

#endif // END: I_SQUAD_HPP
