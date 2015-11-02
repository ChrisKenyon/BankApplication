#include"Client.h"

//CONSTRUCTORS (deconstructor inherited)
Client::Client():Person(){}
Client::Client(string firstName, string lastName, string ssn): Person(firstName, lastName, ssn){}
	

Client::Client(const Client &other):Person(){
	firstName=other.firstName;
	lastName=other.lastName;
	ssn=other.ssn;
	dateOfBirth=other.dateOfBirth;
	for (int d=0; d<other.accounts.size();d++) {
		this->accounts.push_back(other.accounts[d]);}
}			

//SETTERS AND GETTERS - (the rest are inherited)
void Client::setAccounts(vector<Account> accounts){
	for (int y=0; y<accounts.size();y++) {
		this->accounts.push_back(accounts[y]);}}
vector<Account> Client::getAccounts(){
	return accounts;}
void Client::setCustomerSince(int customerSince){
	this->customerSince=customerSince;}
int Client::getCustomerSince(){
	return customerSince;}
		



//METHODS
void Client::addAccount(Account* account){
	accounts.push_back(*account);
}
void Client::display(){
	Person::display();
	for (int h=0;h<accounts.size();h++){
		accounts[h].display();}}