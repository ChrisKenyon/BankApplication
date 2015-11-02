#include"Employee.h"

//CONSTRUCTORS (deconstructor inherited)
Employee::Employee():Person(){}
Employee::Employee(const Employee &other):Person(){
	firstName=other.firstName;
	lastName=other.lastName;
	ssn=other.ssn;}
Employee::Employee(string firstName, string lastName, string ssn) :Person(firstName,lastName,ssn){}

void Employee::display(){
	Person::display();
	cout<<"Date of Hire: "<<dateOfHire.month<<"/"<<dateOfHire.day<<"/"<<dateOfHire.year<<endl;}

//SETTER AND GETTER
void Employee::setDateOfHire(Date dateOfHire){
	this->dateOfHire=dateOfHire;}
Date Employee::getDateOfHire(){
	return dateOfHire;}


//other methods are inherited from person class