#ifndef FULLTIMEEMPLOYEE_H
#define FULLTIMEEMPLOYEE_H

#include<iostream>
#include<string>
#include"Employee.h"
using namespace std;

class FullTimeEmployee: public Employee
{
private:
	float yearlySalary;
public:
	float getWeeklyPay();
	
	void setYearlySalary(float);
	float getYearlySalary();


	FullTimeEmployee(string firstName, string lastName, string ssn, float salary);
	FullTimeEmployee();


};

#endif