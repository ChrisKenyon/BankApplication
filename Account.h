#ifndef ACCOUNT_H
#define ACCOUNT_H

#include"Date.h"
#include<iostream>
#include<string>

using namespace std;

class Account{
private:
	string number;
	Date date;
	float balance;
public:
	Account();
	Account(string number, int month, int day, int year, float balance);
	Account(const Account &other);
	~Account();

	void display();
	
	void setNumber(string number);
	void setDate(int month, int day, int year);
	void setBalance(float balance);

	string getNumber();
	Date getDate();
	float getBalance();
};

#endif