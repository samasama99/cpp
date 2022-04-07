#include "Account.hpp"
#include <ctime>
#include <iostream>
#include <ostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account() {
    _amount = 0;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    _accountIndex = _nbAccounts;

    _nbAccounts++;
}

Account::Account(int initial_deposit) {
    _displayTimestamp();
    std::cout << "_index:" << _nbAccounts << ";amount:" << initial_deposit
              << ";created" << std::endl;

    _amount = initial_deposit;

    _accountIndex = _nbAccounts;
    _nbWithdrawals = 0;
    _nbDeposits = 0;

    _nbAccounts++;
    _totalAmount += initial_deposit;
}

Account::~Account() {
    _displayTimestamp();
    std::cout << "_index:" << _accountIndex << ";amount:" << _amount << ";closed"
              << std::endl;
}

// int Account::getNbAccounts() { return _nbAccounts; }

// int Account::getTotalAmount() { return _totalAmount; }

// int Account::getNbDeposits() { return _totalNbDeposits; }

// int Account::getNbWithdrawals() { return _totalNbWithdrawals; }

void Account::displayAccountsInfos() {
    _displayTimestamp();
    std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount
              << ";deposits:" << _totalNbDeposits
              << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

void Account::makeDeposit(int deposit) {
    _displayTimestamp();
    std::cout << "_index:" << _accountIndex << ";p_amount:" << _amount
              << ";deposit:" << deposit << ";amount:" << _amount + deposit
              << ";nb_deposits:" << _nbDeposits + 1 << std::endl;

    _totalAmount += deposit;
    _amount += deposit;

    _totalNbDeposits++;
    _nbDeposits++;
}

bool Account::makeWithdrawal(int withdrawal) {
    _displayTimestamp();
    if (_amount - withdrawal < 0 || _totalAmount - withdrawal < 0) {
        std::cout << "_index:" << _accountIndex << ";p_amount:" << _amount
                  << ";withdrawal:refused" << std::endl;
        return false;
    }

    std::cout << "_index:" << _accountIndex << ";p_amount:" << _amount
              << ";withdrawal:" << withdrawal
              << ";amount:" << _amount - withdrawal
              << ";nb_withdrawals:" << _nbDeposits << std::endl;

    _totalAmount -= withdrawal;
    _totalNbWithdrawals++;

    _amount -= withdrawal;
    _nbWithdrawals++;
    return true;
}

// int Account::checkAmount(void) const { return _amount; }

void Account::displayStatus() const {
    _displayTimestamp();
    std::cout << "_index:" << _accountIndex << ";amount:" << _amount
              << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals
              << std::endl;
}

void Account::_displayTimestamp() {
    time_t now = time(0);
    // tm *tm_now = localtime(&now);
    // std::cout << "sec" << tm_now->tm_sec << std::endl;
    // std::cout << "min" << tm_now->tm_min << std::endl;
    std::cout << "[" << now << "] ";
}
