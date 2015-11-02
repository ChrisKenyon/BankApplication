#include"Account.h"


//CONSTRUCTORS AND DECONSTRUCTOR
Account::Account(){}
Account::Account(string number, int month, int day, int year, float balance){
	this->number=number;
	date.month=month;
	date.day=day;
	date.year=year;
	this->balance=balance;}
Account::Account(const Account &other){
	number=other.number;
	date=other.date;
	balance=other.balance;}

Account::~Account(){}


//DISPLAY
void Account::display(){
	cout<<"Account Number: "<<number<<endl
		<<"Date: "<<date.month<<"/"<<date.day<<"/"<<date.year<<endl
		<<"Balance: "<<balance<<endl;}


//SETTERS
void Account::setNumber(string number){
	this->number=number;}

void Account::setDate(int month, int day, int year){
	date.month=month;
	date.day=day;
	date.year=year;}

void Account::setBalance(float balance){
	this->balance=balance;}


//GETTERS
string Account::getNumber(){
	return number;}

Date Account::getDate(){
	return date;}

float Account::getBalance(){
	return balance;}