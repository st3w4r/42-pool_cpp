/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/23 19:14:35 by ybarbier          #+#    #+#             */
/*   Updated: 2015/06/23 19:14:37 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

int main(void)
{
	Serialization s1;

	void *v1;
	Serialization::Data *d1;

	v1 = s1.serialize();
	d1 = s1.deserialize(v1);

	std::cout << d1->s1 << std::endl;
	std::cout << d1->n << std::endl;
	std::cout << d1->s2 << std::endl;
	return (0);
}
