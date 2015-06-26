/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/25 19:08:10 by ybarbier          #+#    #+#             */
/*   Updated: 2015/06/25 19:08:11 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANT_STACK_HPP
# define MUTANT_STACK_HPP

#include <iostream>
#include <stack>
#include <list>


template <typename T>

class MutantStack
{
	private:
		std::stack<T> _stack;
		std::list<T> _list;

	public:
		MutantStack<T>(void)
		{

		}

		MutantStack(MutantStack const & src)
		{
			static_cast<void>(src);
		}

		~MutantStack<T>(void)
		{

		}

		void push(T value)
		{
			_list.push_front(value);
			_stack.push(value);
		}

		void pop(void)
		{
			_list.pop_front();
			_stack.pop();
		}

		T top(void)
		{
			return _stack.top();
		}

		T size(void)
		{
			return _stack.size();
		}

		typedef std::list<int>::iterator iterator;

		iterator begin() { return _list.begin();}
		iterator end() { return _list.end();}


		// MutantStack & operator=(MutantStack	Stack const & rhs)
		// {
			// static_cast<void>(rhs);
		// }

		// typedef std::stack<MutantStack>::const_iterator const_iterator;

		// typedef std::stack<MutantStack>::iterator iterator;
		// iterator begin();
		// iterator end();

};

#endif // END: MUTANT_STACK_HPP


// typedef std::vector<Point>::iterator iterator;
// typedef std::vector<Point>::const_iterator const_iterator;
//
// iterator begin() { return m_shape.container.begin(); }
//
// const_iterator begin() const { return m_shape.container.begin(); }
//
// iterator end() { return m_shape.container.end(); }
//
// const_iterator end() const { return m_shape.const_container.end(); }
