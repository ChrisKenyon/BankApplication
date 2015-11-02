#ifndef BANK_H
#define BANK_H

#include"Address.h"
#include"Employee.h"
#include"Client.h"

using namespace std;


class Bank{
private:
	string name;
	Address address;
	vector<Employee*> employees;
	vector<Client*> clients;
public:
	Bank();
	Bank(string, Address, vector<Employee>, vector<Client>);
	Bank(const Bank &other);
	~Bank();
	
	void addClient( Client* client);
	void addEmployee( Employee* employee);
	
	void setName(string name);
	void setAddress(Address address);
	void setEmployee(vector<Employee> employees);
	void setClient(vector<Client> clients);

	string getName();
	Address getAddress();
	vector<Employee*> getEmployees();
	vector<Client*> getClients();

	void display();


};


#endif