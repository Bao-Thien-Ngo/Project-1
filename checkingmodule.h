#pragma once


#include <iostream>
#include <string>
using namespace std;

void deposit(float& account, float amount);

char MainMenu();

float GetValue(string text);

float GetValue(string text);

float GetValue(string text, float upper);

float GetInterestRate(float credit_score);

void withdraw(float& account, float amount);

int GetLoanMonth();

int GetCreditRating();

float CalculateLoanAmount(float interest, int month);

float OutputAccount(float amount);