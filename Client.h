#ifndef CLIENT_H
#define CLIENT_H

#include<vector>
#include"Account.h"
#include"Person.h"
using namespace std;


class Client: public Person{
private:
	vector<Account> accounts;
	int customerSince;
public:
	Client();
	Client(string firstName, string lastName, string ssn);
	Client(const Client &other);
	void setAccounts(vector<Account>);
	vector<Account> getAccounts();
	void setCustomerSince(int);
	int getCustomerSince();

	void addAccount(Account*);
	void display();
};


#endif