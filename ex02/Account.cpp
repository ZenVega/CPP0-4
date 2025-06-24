/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uschmidt <uschmidt@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/24 13:39:51 by uschmidt          #+#    #+#             */
/*   Updated: 2025/06/24 14:29:31 by uschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

int Account::_nbAccounts		 = 0;
int Account::_totalAmount		 = 0;
int Account::_totalNbDeposits	 = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	_amount		   = initial_deposit;
	_nbDeposits	   = 1;
	_nbWithdrawals = 0;
	_accountIndex  = 0;
}

Account::~Account(void)
{
	_nbAccounts--;
	_totalAmount -= _amount;
}

void Account::makeDeposit(int deposit)
{
	_amount += deposit;
	_totalAmount += deposit;
	_nbDeposits++;
	_totalNbDeposits++;
}

bool Account::makeWithdrawal(int withdrawal)
{
	int current_amount = t::checkAmount();
	if (current_amount >= withdrawal)
	{
		_amount -= withdrawal;
		_totalAmount -= withdrawal;
		_nbWithdrawals++;
		_totalNbWithdrawals++;
		return true;
	}
	return false;
}

int Account::getNbAccounts(void)
{
	return _nbAccounts;
}

int Account::getTotalAmount(void)
{
	return _totalAmount;
};

int Account::getNbDeposits(void)
{
	return _totalNbDeposits;
}

int Account::getNbWithdrawals(void)
{
	return _totalNbWithdrawals;
}

void Account::displayAccountsInfos(void)
{
	std::cout << "Account info" << std::endl;
}

int Account::checkAmount(void) const
{
	return _amount;
};

void Account::displayStatus(void) const
{
	std::cout << "STATUS" << std::endl;
};
