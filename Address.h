#ifndef ADDRESS_H
#define ADDRESS_H

#include<iostream>
#include<string>
using namespace std;

class Address{
private:
	string streetAddress, city, state, zip;
public:
	Address();
	Address(string streetAddress, string city, string state,string zip);
	Address(const Address &other);
	~Address();

	void display();

	void setStreetAddress(string streetAddress);
	void setCity(string city);
	void setState(string state);
	void setZip(string zip);

	string getStreetAddress();
	string getCity();
	string getState();
	string getZip();
};

#endif