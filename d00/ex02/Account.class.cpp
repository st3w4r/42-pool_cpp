/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybarbier <ybarbier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/16 22:03:09 by ybarbier          #+#    #+#             */
/*   Updated: 2015/06/16 22:03:11 by ybarbier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>
#include "Account.class.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) {

	this->_accountIndex = _nbAccounts;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;

	Account::_totalAmount += this->_amount;
	Account::_nbAccounts += 1;

	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;
	return;
}

Account::~Account(void) {
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;
	return;
}

// __Getter__
int	Account::getNbAccounts(void) {
	return Account::_nbAccounts;
}

int	Account::getTotalAmount(void) {
	return Account::_totalAmount;
}

int	Account::getNbDeposits(void) {
	return Account::_totalNbDeposits;
}

int Account::getNbWithdrawals(void) {
	return Account::_totalNbWithdrawals;
}

// __Methodes__
void Account::displayAccountsInfos(void) {

	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::_nbAccounts << ";total:" << Account::_totalAmount << ";deposits:" << Account::_totalNbDeposits << ";withdrawals:" << Account::_totalNbWithdrawals << std::endl;

}

void	Account::_displayTimestamp( void ) {
	std::time_t t = std::time(0);
	struct tm * now = localtime( & t );
	std::cout << '[' << (now->tm_year + 1900)
	<< std::setw(2) << std::setfill('0') << (now->tm_mon + 1)
	<< std::setw(2) << std::setfill('0') << now->tm_mday
	<< '_'
	<< std::setw(2) << std::setfill('0') << now->tm_hour
	<< std::setw(2) << std::setfill('0') << now->tm_min
	<< std::setw(2) << std::setfill('0') << now->tm_sec << "] ";
}




void	Account::makeDeposit( int deposit ) {


//	[20150406_153629] index:0;p_amount:42;deposit:5;amount:47;nb_deposits:1

	// std::cout << "index:" << Account::_nbAccounts << ";total:" << Account::_totalAmount << ";deposits:" << Account::_totalNbDeposits << ";withdrawals:" << Account::_totalNbWithdrawals << std::endl;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";deposit:" << deposit << ";amount:" << ( this->_amount + deposit) << ";nb_deposits:" << (this->_nbDeposits + 1) << std::endl;

	this->_amount += deposit;
	this->_nbDeposits += 1;

	Account::_totalNbDeposits += 1;
	Account::_totalAmount += deposit;
}

bool	Account::makeWithdrawal( int withdrawal ) {

	if ((this->_amount - withdrawal) < 0)
	{
		Account::_displayTimestamp();
		std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";withdrawal:refused" << std::endl;
		return false;
	}
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";withdrawal:" << withdrawal << ";amount:" << ( this->_amount - withdrawal) << ";nb_withdrawals:" << (this->_nbWithdrawals + 1) << std::endl;


	this->_amount -= withdrawal;
	this->_nbWithdrawals += 1;

	Account::_totalNbWithdrawals += 1;
	Account::_totalAmount -= withdrawal;
	return true;
}

int		Account::checkAmount( void ) const {
	return 0;
}

void	Account::displayStatus( void ) const {
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

Account::Account(void) {
	return;
}
