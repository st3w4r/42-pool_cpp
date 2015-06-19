/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/19 13:48:29 by ybarbier          #+#    #+#             */
/*   Updated: 2015/06/19 13:48:30 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ENEMY_HPP
# define ENEMY_HPP

#include <iostream>
#include <string>

class Enemy
{
	private:
		int _HP;
		std::string _type;

	protected:
		Enemy(void);
	public:
		Enemy(int hp, std::string const & type);
		Enemy(Enemy const & src);
		virtual ~Enemy(void);

		Enemy & operator=(Enemy const & rhs);

		std::string const getType() const;
		int getHP() const;
		virtual void takeDamage(int);

		void setType(std::string);
		void setHP(int);
};

#endif // END: ENEMY_HPP
