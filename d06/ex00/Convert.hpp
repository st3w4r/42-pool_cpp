/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/23 11:11:01 by ybarbier          #+#    #+#             */
/*   Updated: 2015/06/23 11:11:05 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

#include <string>
#include <iostream>
#include <math.h>

class Convert
{
	public:
		class NoneDisplayableException : public std::exception
		{
			private:
			public:
				NoneDisplayableException(void);
				NoneDisplayableException(NoneDisplayableException const & src);
				virtual ~NoneDisplayableException(void) throw();

				NoneDisplayableException & operator=(NoneDisplayableException const & rhs);

				virtual const char * what() const throw();
		};

		class ImpossibleException : public std::exception
		{
			private:
			public:
				ImpossibleException(void);
				ImpossibleException(ImpossibleException const & src);
				virtual ~ImpossibleException(void) throw();

				ImpossibleException & operator=(ImpossibleException const & rhs);

				virtual const char * what() const throw();
		};
	private:
	public:
		Convert(void);
		Convert(Convert const & src);
		~Convert(void);

		Convert & operator=(Convert const & rhs);

		static char		doubleToChar(double dIn);
		static int		doubleToInt(double dIn);
		static float	doubleToFloat(double dIn);
		static double	doubleToDouble(double dIn);
};

#endif // END: CONVERT_HPP
