#ifndef HOURLYEMPLOYEE_H
#define HOURLYEMPLOYEE_H

#include<iostream>
#include<string>
#include"Employee.h"
using namespace std;

class HourlyEmployee: public Employee
{
private:
	float hoursWorked, hourlyRate;
public:
	float getWeeklyPay();
	
	void setHoursWorked(float);
	float getHoursWorked();

	void setHourlyRate(float);
	float getHourlyRate();

	HourlyEmployee(string firstName, string lastName, string ssn, float hours,float rate);
	HourlyEmployee();


};

#endif