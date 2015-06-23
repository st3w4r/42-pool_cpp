/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/23 20:07:54 by ybarbier          #+#    #+#             */
/*   Updated: 2015/06/23 20:07:55 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BASE_HPP
# define BASE_HPP


class Base
{
	private:
	public:
		Base(void);
		Base(Base const & src);
		virtual ~Base(void);

		Base & operator=(Base const & rhs);
};

#endif // END: BASE_HPP
