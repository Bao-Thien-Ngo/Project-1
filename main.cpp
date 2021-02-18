#include <iostream>
#include <string>
#include "checkingmodule.h"

using namespace std;


int main() {
	float account_balance = 0.0;
	float withdraw_value = 0.0;
	float interest_rate = 0.0;
	float credit_rate = 0.0;
	float loan_amount = 0.0;
	int loan_month = 0;
	char option;
	bool x = true;

	while (x) {
		cout << "Main Menu (Enter one of the following" << endl;
		cout << "        " << "(D)eposit, (W)ithdrawal, (L)oan, or (Q)uit" << endl;
		option = MainMenu();
		switch (option) {
		case 'D':
			account_balance = GetValue("How much do you want to deposit? ==> ");
			OutputAccount(account_balance);
			break;
		case 'W':
			withdraw_value = GetValue("How much do you want to withdraw? ==> ", account_balance);
			withdraw(account_balance, withdraw_value);
			OutputAccount(account_balance);
			break;
		case 'L':
			credit_rate = GetCreditRating();
			interest_rate = GetInterestRate(credit_rate);
			loan_month = GetLoanMonth();
			loan_amount = CalculateLoanAmount(interest_rate, loan_month);
			break;
		case 'Q':
			x = false;
			cout << "Thank you for your transaction" << endl;
			break;
		}
	}
	system("pause");
	return 0;
}

