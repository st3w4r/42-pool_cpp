/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/16 16:14:12 by ybarbier          #+#    #+#             */
/*   Updated: 2015/06/16 16:14:13 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

#include <string>
#include <sstream>
#include "Brain.hpp"

class Human {

	private:
		const Brain _brain;

	public:
		Human();
		~Human();

		const Brain &getBrain();
		std::string identify() const;
};

#endif // HUMAN_HPP
