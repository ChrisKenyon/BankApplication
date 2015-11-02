#include"FullTimeEmployee.h"

FullTimeEmployee::FullTimeEmployee():Employee(){};
FullTimeEmployee::FullTimeEmployee(string firstName, string lastName, string ssn, float salary):Employee(firstName,lastName,ssn){
	yearlySalary=salary;};

float FullTimeEmployee::getWeeklyPay(){
	return yearlySalary/52;}

void FullTimeEmployee::setYearlySalary(float salary){
	yearlySalary=salary;}
float FullTimeEmployee::getYearlySalary(){
	return yearlySalary;}
