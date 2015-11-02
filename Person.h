#ifndef PERSON_H
#define PERSON_H

#include<iostream>
#include<string>
#include"Date.h"

using namespace std;

class Person{
protected:
	string firstName, lastName, ssn;
	Date dateOfBirth;
public:
	Person();
	Person(string firstName,string lastName,string ssn/*, Date dateOfBirth*/);
	~Person();

	void display();

	void setFirstName(string firstName);
	void setLastName(string lastName);
	void setSSN(string ssn);
	void setDOB(Date dateOfBirth);

	string getFirstName();
	string getLastName();
	string getSSN();
};


#endif