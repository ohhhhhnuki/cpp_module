//
// Created by 大貫　弘貴 on 2022/06/14.
//

#include <iostream>
#include <iomanip>
#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) {
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->_accountIndex = _nbDeposits;
	this->_amount = initial_deposit;

	_displayTimestamp();

	std::cout << "index:" << this->_accountIndex << ";"
			  << "amount:" << this->_amount << ";"
			  << "created" << std::endl;
}

Account::~Account() {
	_displayTimestamp();

	std::cout << "index" << this->_accountIndex << ";"
			  << "amount:" << this->_amount << ";"
			  << "closed" << std::endl;
}

Account::Account() {}

void Account::displayAccountsInfos() {
	_displayTimestamp();

	std::cout << "accounts:" << getNbAccounts() << ";"
		<< "total:" << getTotalAmount() << ";"
		<< "deposits" << getNbDeposits() << ";"
		<< "withdrawals:" << getNbWithdrawals() << std::endl;
}

void Account::makeDeposit(int deposit) {
	this->_nbDeposits++;
	this->_amount += deposit;
	_displayTimestamp();

	std::cout << "index:" << this->_accountIndex << ";"
			  << "p_amount:" << this->_amount << ";"
			  << "deposits:" << deposit << ";"
			  << "amount:" << this->_amount << ";"
			  << "nb_deposits:" << this->_nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int withdrawal) {
	_displayTimestamp();

	std::cout << "index:" << this->_accountIndex << ";"
			  << "p_amount:" << this->_amount << ";"
			  << "withdrawal:" << withdrawal << ";"
			  << "amount:" << this->_amount - withdrawal << ";"
			  << "nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	return true;
}

int Account::checkAmount() const {
	return this->_amount;
}

void Account::displayStatus() const {
	_displayTimestamp();

	std::cout << "index:" << this->_accountIndex << ";"
			<< "amount:" << this->_amount << ";"
			<< "deposits:" << this->_nbDeposits << ";"
			<< "withdrawals:" << this->_nbWithdrawals << ";"
			<< std::endl;
}

void Account::_displayTimestamp() {
	time_t currentTime = std::time(NULL);

	std::cout << std::put_time(localtime(&currentTime), "[%Y%m%d_%H%M%S] ");
}

//getter
int Account::getNbAccounts() {
	return _nbAccounts;
}

int Account::getTotalAmount() {
	return _totalAmount;
}

int Account::getNbDeposits() {
	return _totalNbDeposits;
}

int Account::getNbWithdrawals() {
	return _totalNbWithdrawals;
}

