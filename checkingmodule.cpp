#include <iostream>
#include <string>
#include <cmath>  
#include <iomanip>

using namespace std;

// function to deposit money
void deposit(float& account, float amount) {
	account = account + amount;
}

// function to ask user for input
char MainMenu() {
	char option;
	cin >> option;
	option = toupper(option);
	while (option != 'D' && option != 'W' && option != 'L' && option != 'Q') {
		cout << "You have to choose D, W, L, or Q" << endl;
		cin >> option;
		option = toupper(option);
	}
	return option;
}

//function for getting deposit
float GetValue(string text) {
	float amount = 0.0;
	cout << text;
	cin >> amount;
	while (amount < 1) {
		cout << "You must enter an amount greater than 0" << endl;
		cout << text << endl;
		cin >> amount;
	}
	return amount;
}

// function for getting withdraw value
float GetValue(string text, float upper) {
	float amount = 0.0;
	cout << text;
	cin >> amount;
	while (amount < 1 || amount > upper) {
		cout << "You must enter an amount less than or equal than " << upper << endl;
		cout << text << endl;
		cin >> amount;
	}
	return amount;
}

//function for getting credit score
float GetInterestRate(float credit_score) {
	float interest_rate;
	if (credit_score <= 500) {
		interest_rate = 0.05;
	}
	if (500 < credit_score && credit_score <= 700) {
		interest_rate = 0.03;
	}
	if (credit_score > 700) {
		interest_rate = 0.01;
	}
	return interest_rate;
}

//function for withdrawing money
void withdraw(float& account, float amount) {
	account = account - amount;
}

//function for getting loan month
int GetLoanMonth() {
	int month;
	cout << "How many months for the loan? 12, 24, 36, or 60 ==> " << endl;
	cin >> month;
	while (month != 12 && month != 24 && month != 36 && month != 60) {
		cout << "You have to choose 12, 24, 36, 60" << endl;
		cout << "How many months for the loan? 12, 24, 36, or 60 ==> " << endl;
		cin >> month;
	}
	return month;
}

//function for getting credit rating
int GetCreditRating() {
	int credit;
	cout << "What is your credit rating? [300,850] ==> " << endl;
	cin >> credit;
	while (credit < 300 || credit > 850) {
		cout << "You have to choose from 300 and 850" << endl;
		cin >> credit;
	}
	return credit;
}

//function for calculating loan amount
float CalculateLoanAmount(float interest, int month) {
	float amount;
	float principal;
	cout << "How much do you want to borrow? " << endl;
	cin >> principal;
	amount = principal * (pow((1 + (interest / 12)), (month / 12)));
	cout << endl;
	cout << "Interest rate  : " << interest << endl;
	cout << "Principal : " << principal << endl;
	cout << "Months : " << month << endl;
	cout << "Your total loan amount is " << amount << endl;
	return amount;
}

float OutputAccount(float amount) {
	cout << "Summary of Account" << endl;
	cout << "   Amount $" << amount << endl << endl;
	return amount;
}







