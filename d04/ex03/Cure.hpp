/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/20 22:14:53 by ybarbier          #+#    #+#             */
/*   Updated: 2015/06/20 22:14:54 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Cure : public AMateria
{
	private:
		
	public:
		Cure(void);
		Cure(Cure const & src);
		~Cure(void);

		Cure & operator=(Cure const & rhs);

		AMateria* clone();
		void use(ICharacter& target);
};

#endif // END: CURE_HPP
