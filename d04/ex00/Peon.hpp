/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/19 10:41:04 by ybarbier          #+#    #+#             */
/*   Updated: 2015/06/19 10:41:04 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

#include <iostream>
#include "Victim.hpp"

class Peon : public Victim
{
	private:
		Peon(void);
	public:
		Peon(std::string const name);
		Peon(Peon const & src);
		~Peon(void);

		Peon & operator=(Peon const & rhs);

		void getPolymorphed() const;


};


#endif // END: PEON_HPP
