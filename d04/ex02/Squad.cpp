/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/20 10:20:54 by ybarbier          #+#    #+#             */
/*   Updated: 2015/06/20 10:20:55 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"


Squad::Squad(void) : _listUnits(NULL)
{
	return;
}

Squad::Squad(Squad const & src)
{
	*this = src;
	return;
}

Squad::~Squad(void)
{
	struct _sUnit *tmp = _listUnits;

	while (_listUnits)
	{
		delete _listUnits->spaceMarine;
		_listUnits = _listUnits->next;
		if (!_listUnits)
			delete tmp;
	}
	return;
}

Squad & Squad::operator=(Squad const & rhs)
{
	_listUnits = rhs._listUnits;
	return *this;
}

//__Interface__
int Squad::getCount() const
{
	int nbUnits = 0;
	struct _sUnit *beginList = this->_listUnits;

	while(beginList)
	{
		beginList = beginList->next;
		nbUnits++;
	}
	return nbUnits;
}

ISpaceMarine* Squad::getUnit(int index) const
{
	struct _sUnit *beginList = this->_listUnits;

	while (beginList)
	{
		if (beginList->index == index)
		{
			return beginList->spaceMarine;
		}
		beginList = beginList->next;
	}
	return NULL;
}

int Squad::push(ISpaceMarine* spaceMarine)
{
	struct _sUnit *beginList = this->_listUnits;
	struct _sUnit *newUnit = new _sUnit();

	if (spaceMarine)
	{
		newUnit->spaceMarine = spaceMarine;
		newUnit->next = NULL;
		if (!_listUnits)
		{
			newUnit->index = 0;
			_listUnits = newUnit;
			return (this->getCount());
		}
		else if (this->alereadyExist(spaceMarine))
			return (this->getCount());
		else
		{
			while (_listUnits->next)
				_listUnits = _listUnits->next;
			newUnit->index = (_listUnits->index + 1);
		}
		_listUnits->next = newUnit;
		_listUnits = beginList;
		return (this->getCount());
	}
	return this->getCount();
}

bool Squad::alereadyExist(ISpaceMarine * spaceMarine)
{
	struct _sUnit *beginList = this->_listUnits;

	while (beginList)
	{
		if (beginList->spaceMarine == spaceMarine)
		{
			return true;
		}
		beginList = beginList->next;
	}
	return false;
}
