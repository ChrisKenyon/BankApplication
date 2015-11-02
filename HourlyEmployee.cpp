#include"HourlyEmployee.h"

HourlyEmployee::HourlyEmployee():Employee(){};
HourlyEmployee::HourlyEmployee(string firstName, string lastName, string ssn, float hours,float rate):Employee(firstName,lastName,ssn){
	hoursWorked=hours;
	hourlyRate=rate;};

float HourlyEmployee::getWeeklyPay(){
	return hoursWorked*hourlyRate;}

void HourlyEmployee::setHoursWorked(float hours){
	hoursWorked=hours;}
float HourlyEmployee::getHoursWorked(){
	return hoursWorked;}
void HourlyEmployee::setHourlyRate(float rate){
	hourlyRate=rate;}
float HourlyEmployee::getHourlyRate(){
	return hourlyRate;}

