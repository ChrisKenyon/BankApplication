#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include<iostream>
#include<string>
#include"Person.h"
using namespace std;

class Employee: public Person
{
private:
	Date dateOfHire;
public:
	Employee();
	Employee(const Employee &other);
	Employee(string firstName,string lastName,string ssn);
	void setDateOfHire(Date dateOfHire);
	Date getDateOfHire();

	void display();
	virtual float getWeeklyPay() =0;
};


#endif