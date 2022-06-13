//
// Created by 大貫　弘貴 on 2022/06/14.
//

#include "Account.hpp"

Account::Account(int initial_deposit) {
	this->_nbDeposits = initial_deposit;
}

Account::Account() {}

Account::~Account() {}

void Account::displayAccountsInfos() {

}

void Account::makeDeposit(int deposit) {

}

bool Account::makeWithdrawal(int withdrawal) {

}

int Account::checkAmount() const {

}

void Account::displayStatus() const {

}

void Account::_displayTimestamp() {

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

