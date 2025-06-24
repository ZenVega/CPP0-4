// ************************************************************************** //
//                                                                            //
//                Account.hpp for GlobalBanksters United                //
//                Created on  : Thu Nov 20 19:43:15 1989                      //
//                Last update : Wed Jan 04 14:54:06 1992                      //
//                Made by : Brad "Buddy" McLane <bm@gbu.com>                  //
//                                                                            //
// ************************************************************************** //

#pragma once
#ifndef __ACCOUNT_H__
#define __ACCOUNT_H__

#include <cctype>
#include <cstdlib>
#include <iostream>
// ************************************************************************** //
//                               Account Class                                //
// ************************************************************************** //

class Account
{
private:
	// These are global for all instances of this Class
	static int _nbAccounts;
	static int _totalAmount;
	static int _totalNbDeposits;
	static int _totalNbWithdrawals;

	static void _displayTimestamp(void);

	// These are local for a single object
	int _accountIndex;
	int _amount;
	int _nbDeposits;
	int _nbWithdrawals;

	Account(void);

public:
	typedef Account t; // inside Class t can be used replacable

	static int	getNbAccounts(void);
	static int	getTotalAmount(void);
	static int	getNbDeposits(void);
	static int	getNbWithdrawals(void);
	static void displayAccountsInfos(void);

	Account(int initial_deposit);
	~Account(void);

	void makeDeposit(int deposit);
	bool makeWithdrawal(int withdrawal);
	int	 checkAmount(void) const; // const here defines this function as not mutating the object
	void displayStatus(void) const;
};

// ************************************************************************** //
// vim: set ts=4 sw=4 tw=80 noexpandtab:                                      //
// -*- indent-tabs-mode:t;                                                   -*-
// -*- mode: c++-mode;                                                       -*-
// -*- fill-column: 75; comment-column: 75;                                  -*-
// ************************************************************************** //

#endif /* __ACCOUNT_H__ */
