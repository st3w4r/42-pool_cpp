/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/20 22:13:53 by ybarbier          #+#    #+#             */
/*   Updated: 2015/06/20 22:13:55 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
	private:
	public:
		Ice(void);
		Ice(Ice const & src);
		~Ice(void);

		Ice & operator=(Ice const & rhs);

};

#endif // END: ICE_HPP
