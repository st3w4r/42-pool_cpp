/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/25 12:42:35 by ybarbier          #+#    #+#             */
/*   Updated: 2015/06/25 12:42:36 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <list>
#include <vector>
#include <algorithm>

class Span
{
	class NumberExistException : public std::exception
	{
		private:
		public:
			NumberExistException(void);
			NumberExistException(NumberExistException const & src);
			virtual ~NumberExistException(void) throw();

			NumberExistException & operator=(NumberExistException const & rhs);

			virtual const char * what() const throw();
	};

	class EmptyException : public std::exception
	{
		private:
		public:
			EmptyException(void);
			EmptyException(EmptyException const & src);
			virtual ~EmptyException(void) throw();

			EmptyException & operator=(EmptyException const & rhs);

			virtual const char * what() const throw();
	};

	class InvalidNumberException : public std::exception
	{
		private:
		public:
			InvalidNumberException(void);
			InvalidNumberException(InvalidNumberException const & src);
			virtual ~InvalidNumberException(void) throw();

			InvalidNumberException & operator=(InvalidNumberException const & rhs);

			virtual const char * what() const throw();
	};


	private:
		std::vector<unsigned int> _containerInts;

	public:
		Span(void);
		Span(unsigned int n);
		Span(Span const & src);
		~Span(void);

		Span & operator=(Span const & rhs);

		unsigned int longestSpan();
		unsigned int shortestSpan();
		void addNumber(unsigned int n);
		template<typename T>
		bool easyfind(T container, int n);
};

#endif // END: SPAN_HPP
