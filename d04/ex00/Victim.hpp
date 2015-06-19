/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/19 10:41:30 by ybarbier          #+#    #+#             */
/*   Updated: 2015/06/19 10:41:31 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

#include <iostream>

class Victim
{
	private:
		Victim(void);

		std::string _name;

	public:
		Victim(std::string const name);
		Victim(Victim const & src);
		virtual ~Victim(void);

		virtual void getPolymorphed() const;

		Victim & operator=(Victim const & rhs);

		//__Getter__
		std::string getName(void) const;

		//__Setter__
		void setName(std::string name);
};

std::ostream & operator<<(std::ostream & o, Victim const & rhs);


#endif // END: VICTIM_HPP
