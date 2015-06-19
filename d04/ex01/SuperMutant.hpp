/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/19 13:48:46 by ybarbier          #+#    #+#             */
/*   Updated: 2015/06/19 13:48:47 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SUPER_MUTANT_HPP
# define SUPER_MUTANT_HPP

#include <iostream>
#include <string>
#include "Enemy.hpp"

class SuperMutant : public Enemy
{
	private:
	public:
		SuperMutant(void);
		SuperMutant(SuperMutant const & src);
		~SuperMutant(void);

		SuperMutant & operator=(SuperMutant const & rhs);

		void takeDamage(int);
};

#endif // END: SUPER_MUTANT_HPP
