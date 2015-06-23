/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialization.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/23 17:13:23 by ybarbier          #+#    #+#             */
/*   Updated: 2015/06/23 17:13:24 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SERIALIZATION_HPP
# define SERIALIZATION_HPP

#include <string>
#include <iostream>
#include <ctime>

class Serialization
{
	public:
		struct Data {
			std::string s1;
			int n;
			std::string s2;
		} typedef Data;

	private:
	public:
		Serialization(void);
		Serialization(Serialization const & src);
		~Serialization(void);

		Serialization & operator=(Serialization const & rhs);

		void * serialize(void);
		Data * deserialize( void * raw );
		std::string randomArrayAplhaNum();
};

#endif // END: SERIALIZATION_HPP
