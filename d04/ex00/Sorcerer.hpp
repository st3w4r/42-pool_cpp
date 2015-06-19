/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/19 10:41:12 by ybarbier          #+#    #+#             */
/*   Updated: 2015/06/19 10:41:13 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

#include <iostream>
#include "Victim.hpp"

class Sorcerer
{
	private:
		Sorcerer(void);

		std::string _name;
		std::string _title;

	public:
		Sorcerer(std::string const name, std::string const title);
		Sorcerer(Sorcerer const & src);
		~Sorcerer(void);

		Sorcerer & operator=(Sorcerer const & rhs);

		void polymorph(Victim const &) const;

		//__Getter__
		std::string getName(void) const;
		std::string getTitle(void) const;
};

std::ostream & operator<<(std::ostream & o, Sorcerer const & rhs);


#endif // END: SORCERER_HPP
