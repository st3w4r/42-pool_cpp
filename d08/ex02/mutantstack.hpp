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

		MutantStack(MutantStack const & src);

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
		typedef std::list<int>::const_iterator const_iterator;

		iterator begin() { return _list.begin();}
		iterator end() { return _list.end();}
		const iterator begin() const { return _list.begin();}
		const iterator end() const { return _list.end();}
};

#endif // END: MUTANT_STACK_HPP
