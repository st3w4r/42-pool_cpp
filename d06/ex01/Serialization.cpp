/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialization.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/23 17:13:17 by ybarbier          #+#    #+#             */
/*   Updated: 2015/06/23 17:13:18 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

Serialization::Serialization(void)
{
	srand(time(NULL));
	return;
}

Serialization::Serialization(Serialization const & src)
{
	srand(time(NULL));
	*this = src;
	return;
}

Serialization::~Serialization(void)
{
	return;
}

Serialization & Serialization::operator=(Serialization const & rhs)
{
	static_cast<void>(rhs);
	return *this;
}

std::string Serialization::randomArrayAplhaNum()
{
	std::string arrAlphaNum = std::string("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789");
	std::string str = std::string("");
	for (int i = 0; i < 8; i++)
	{
		str += arrAlphaNum.at(rand() % 61);
	}
	return str;
}


void * Serialization::serialize(void)
{
	Data *data;

	data = new Data();
	data->s1 = randomArrayAplhaNum();
	data->n = rand();
	data->s2 = randomArrayAplhaNum();
	return reinterpret_cast<void *>(data);
}

Serialization::Data * Serialization::deserialize(void * raw)
{
	Data * data = reinterpret_cast<Data *>(raw);
	return data;
}
