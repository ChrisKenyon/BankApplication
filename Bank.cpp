#include"Bank.h"


Bank::Bank(){}
Bank::~Bank(){}
Bank::Bank(string name, Address address, vector<Employee> employees, vector<Client> clients){
	this->name=name;
	this->address=address;
	for (int i=0; i<employees.size();i++) this->employees.push_back(&employees[i]);
	for (int j=0;j<(clients.size());j++) this->clients.push_back(&clients[j]);
}
Bank::Bank(const Bank &other){
	name=other.name;
	address=other.address;
	for (int e=0; e<other.employees.size();e++) {
		this->employees.push_back(other.employees[e]);}
	for (int x=0; x<other.clients.size();x++) {
		this->clients.push_back(other.clients[x]);}
}

void Bank::setName(string name){
	this->name=name;}
void Bank::setAddress(Address address){
	this->address=address;}
void Bank::setEmployee(vector<Employee> employees){
	for (int y=0; y<employees.size();y++) {
		this->employees.push_back(&employees[y]);}}
void Bank::setClient(vector<Client> clients){
	for (int s=0; s<clients.size();s++) {
		this->clients.push_back(&clients[s]);}}


void Bank::addClient( Client* client){
	(clients).push_back(client);}

void Bank::addEmployee( Employee* employee){
	(employees).push_back(employee);}

string Bank::getName(){
	return name;}

Address Bank::getAddress(){
	return address;}

vector<Employee*> Bank::getEmployees(){
	return employees;}

vector<Client*> Bank::getClients(){
	return clients;}

void Bank::display(){
	cout<<name<<endl;
	address.display();
	cout << "Employees:"<<endl;
	for (int k=0; k<employees.size(); k++) employees[k]->display();
	cout<<"Clients:" <<endl;
	for (int l=0; l<clients.size(); l++) clients[l]->display();
}