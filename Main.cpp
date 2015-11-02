#include<iostream>
#include<conio.h>
#include"Bank.h"
#include"Client.h"
#include"HourlyEmployee.h"
#include"FullTimeEmployee.h"
#include"Account.h"
using namespace std;


int main(){
	
	vector<Bank*> BankList;
	string name;
	Address address; string street, zip, city, state;
	vector<Client*> clients;  string fName, lName, ssn;
	vector<Account*> accounts; string number; int month, day, year; float balance;
	vector<Employee*> employees; 
	int numClients, numHourlyEmployees, numFullTimeEmployees, numAccounts, clEnd, bnkEnd, loop=0;
	Date dateOfB, dateOfH;
	float rate, hours, salary, payroll;
	const int CONTINUE=0, END=1;

	Bank addBank;
	while (loop==CONTINUE){
	clients.clear();
	accounts.clear();
	employees.clear();

	int selection, selection2, selection3;
	system("pause");
	system("CLS");
	cout<<"Please type the number of your selection:"<<endl
		<<"1.  Create Bank"<<endl
		<<"2.  Display Banks"<<endl
		<<"3.  Add Client to a Bank;"<<endl
		<<"4.  Add Hourly Employee to a Bank"<<endl
		<<"5.  Add Full Time Employee to a Bank"<<endl
		<<"6.  Add Account to Client"<<endl
		<<"7.  Calculate Weekly Payroll"<<endl
		<<"8.  Quit"<<endl;
	cin>>selection;
	switch(selection){

		//Create Bank - asks for values for a new bank and adds the new bank to a vector of Banks
		case 1:

			BankList.push_back(new Bank());
			bnkEnd=BankList.size()-1;
			cout<<"Please enter the name of the new bank"<<endl;
			cin>>name;
			cout<<"Please enter the street address of the bank"<<endl;
			cin.ignore();
			getline(cin,street);
			cout<<"Please enter the city of the bank"<<endl;
			cin>>city;
			cout<<"Please enter the state of the bank"<<endl;
			cin>>state;
			cout<<"Please enter the zip code of the bank"<<endl;
			cin>>zip;
			address.setStreetAddress(street); address.setCity(city);
			address.setState(state); address.setZip(zip);
			cout<<"How many clients are there?";
			cin>>numClients;
			for (int i=0; i<numClients; i++){
				cout<<"What is the first name of client #"<<i+1<<"?"<<endl;
				cin>>fName;
				cout<<"What is the last name of client #"<<i+1<<"?"<<endl;
				cin>>lName;
				cout<<"What is the social security number of client #"<<i+1<<"?"<<endl;
				cin>>ssn;
				cout<<"How many accounts does client #"<<i+1<<" have?"<<endl;
				cin>>numAccounts;
				clients.push_back(new Client());
				clients[i]->setFirstName(fName);
				clients[i]->setLastName(lName);
				clients[i]->setSSN(ssn);
				for (int k=0; k<numAccounts; k++){
					cout<<"What is the account number?"<<endl;
					cin>>number;
					cout<<"What year was this account created? (YYYY)"<<endl;
					cin>>year;
					cout<<"Month? (MM)"<<endl;
					cin>>month;
					cout<<"Day? (DD)"<<endl;
					cin>>day;
					cout<<"What is the balance?"<<endl;
					cin>>balance;
					clients[i]->addAccount(new Account(number,month,day,year,balance));}
				
					
				}
			cout<<"How many hourly employees are there?";
			cin>>numHourlyEmployees;
			for (int q=0; q<numHourlyEmployees; q++){
				cout<<"What is the first name of employee #"<<q+1<<"?"<<endl;
				cin>>fName;
				cout<<"What is the last name of employee #"<<q+1<<"?"<<endl;
				cin>>lName;
				cout<<"What is the social security number of employee #"<<q+1<<"?"<<endl;
				cin>>ssn;
				cout<<"What is the hourly rate of employee #"<<q+1<<"?"<<endl;
				cin>>rate;
				cout<<"How many hours are worked each week by employee #"<<q+1<<"?"<<endl;
				cin>>hours;
				
				employees.push_back(new HourlyEmployee(fName,lName,ssn,hours,rate));		
			
				cout<<"What is the date of birth of employee #"<<q+1<<"?"
					<<endl<<"(input MM, ENTER, DD, ENTER, then YYYY)"<<endl;
				cin>>month;cin>>day;cin>>year;
				dateOfB.month=month;dateOfB.day=day;dateOfB.year=year;
				cout<<"What is the date of hire of employee #"<<q+1<<"?"
					<<endl<<"(input MM, ENTER, DD, ENTER, then YYYY)"<<endl;
				cin>>month;cin>>day;cin>>year;
				dateOfH.month=month;dateOfB.day=day;dateOfB.year=year;
				employees[employees.size()-1]->setDateOfHire(dateOfH);
				employees[employees.size()-1]->setDOB(dateOfB);}

			cout<<"How many full time employees are there?";
			cin>>numFullTimeEmployees;
			for (int q=0; q<numFullTimeEmployees; q++){
				cout<<"What is the first name of employee #"<<q+1<<"?"<<endl;
				cin>>fName;
				cout<<"What is the last name of employee #"<<q+1<<"?"<<endl;
				cin>>lName;
				cout<<"What is the social security number of employee #"<<q+1<<"?"<<endl;
				cin>>ssn;
				cout<<"What is the salary of employee #"<<q+1<<"?"<<endl;
				cin>>salary;
	
				employees.push_back(new FullTimeEmployee(fName,lName,ssn,salary));

				cout<<"What is the date of birth of employee #"<<q+1<<"?"
					<<endl<<"(input MM, ENTER, DD, ENTER, then YYYY)"<<endl;
				cin>>month;cin>>day;cin>>year;
				dateOfB.month=month;dateOfB.day=day;dateOfB.year=year;
				cout<<"What is the date of hire of employee #"<<q+1<<"?"
					<<endl<<"(input MM, ENTER, DD, ENTER, then YYYY)"<<endl;
				cin>>month;cin>>day;cin>>year;
				dateOfH.month=month;dateOfH.day=day;dateOfH.year=year;
				employees[employees.size()-1]->setDateOfHire(dateOfH);
				employees[employees.size()-1]->setDOB(dateOfB);

				}
	
			
			BankList[bnkEnd]->setName(name);
			BankList[bnkEnd]->setAddress(address);
			for (int i=0; i<employees.size();i++) BankList[bnkEnd]->addEmployee(employees[i]);
			for (int k=0; k<clients.size(); k++) BankList[bnkEnd]->addClient(clients[k]);

			break;
			
		case 2:
		//List Banks - displays the vector of Banks
			cout<<"Which bank?"<<endl;
			for (int h=0; h<BankList.size(); h++){
				cout<<h+1<<".  "<<BankList[h]->getName()<<endl;}
			cin>>selection2;
			selection2--;
			BankList[selection2]->display();
			break;
			
		case 3:
	//Add Client to Bank - 
	//	asks which Bank, 
	//  asks values for a new client, 
	//  and adds the new client to the vector of clients of the selected bank
		cout<<"Which bank would you like to add a client to?"<<endl;
		for (int g=0; g<BankList.size(); g++){

			cout<<g+1<<".  "<<BankList[g]->getName()<<endl;}
		cin>>selection2;
		selection2--;

		cout<<"What is the first name of the client?"<<endl;
		cin>>fName;
		cout<<"What is the last name of the client?"<<endl;
		cin>>lName;
		cout<<"What is the social security number of the client?"<<endl;
		cin>>ssn;
		cout<<"How many accounts does the client have?"<<endl;
		cin>>numAccounts;
			for (int k=0; k<numAccounts; k++){
				cout<<"What is the account number?"<<endl;
				cin>>number;
				cout<<"What year was this account created? (YYYY)"<<endl;
				cin>>year;
				cout<<"Month? (MM)"<<endl;
				cin>>month;
				cout<<"Day? (DD)"<<endl;
				cin>>day;
				cout<<"What is the balance?"<<endl;
				cin>>balance;
				accounts.push_back(new Account(number,month,day,year,balance));}
			
			cout<<"What is the date of birth of the client?"
				<<endl<<"(input MM, ENTER, DD, ENTER, then YYYY)"<<endl;
			cin>>month;cin>>day;cin>>year;
			dateOfB.month=month;dateOfB.day=day;dateOfB.year=year;
			clients.push_back(new Client(fName,lName,ssn));
			clients[0]->setDOB(dateOfB);
			for (int h=0; h<accounts.size(); h++) clients[0]->addAccount(accounts[h]);
			BankList[selection2]->addClient(clients[0]);

			break;


		case 4:
		//Add Hourly Employee to Bank - 
		//  asks which Bank, 
		//	asks values for a new employee, 
		//	and adds the new HourlyEmployee to the vector of Employees of the selected bank
		cout<<"Which bank would you like to add an hourly employee to?"<<endl;
		for (int g=0; g<BankList.size(); g++){
			cout<<g+1<<".  "<<BankList[g]->getName()<<endl;}
		cin>>selection2;
		selection2--;
		cout<<"What is the first name of the employee?"<<endl;
		cin>>fName;
		cout<<"What is the last name of the employee?"<<endl;
		cin>>lName;
		cout<<"What is the social security number of the employee?"<<endl;
		cin>>ssn;	
		cout<<"What is the hourly rate of the employee?"<<endl;
		cin>>rate;
		cout<<"How many hours are worked each week by the employee?"<<endl;
		cin>>hours;
			
		BankList[selection2]->addEmployee(new HourlyEmployee(fName,lName,ssn,hours,rate));		
			
		cout<<"What is the date of birth of the employee?"
			<<endl<<"(input MM, ENTER, DD, ENTER, then YYYY)"<<endl;
		cin>>month;cin>>day;cin>>year;
		dateOfB.month=month;dateOfB.day=day;dateOfB.year=year;
		cout<<"What is the date of hire of the employee?"
			<<endl<<"(input MM, ENTER, DD, ENTER, then YYYY)"<<endl;
		cin>>month;cin>>day;cin>>year;
		dateOfH.month=month;dateOfH.day=day;dateOfH.year=year;
		BankList[selection2]->getEmployees()[BankList[selection2]->getEmployees().size()-1]->setDOB(dateOfB);
		BankList[selection2]->getEmployees()[BankList[selection2]->getEmployees().size()-1]->setDateOfHire(dateOfH);

		
		break;

		case 5:
		//Add Full Time Employee to Bank - 
		//  asks which Bank, 
		//	asks values for a new employee, 
		//	and adds the new FullTimeEmployee to the vector of Employees of the selected bank
		cout<<"Which bank would you like to add an employee to?"<<endl;
		for (int g=0; g<BankList.size(); g++){
			cout<<g+1<<".  "<<BankList[g]->getName()<<endl;}
		cin>>selection2;
		selection2--;
		cout<<"What is the first name of the employee?"<<endl;
		cin>>fName;
		cout<<"What is the last name of the employee?"<<endl;
		cin>>lName;
		cout<<"What is the social security number of the employee?"<<endl;
		cin>>ssn;	
		cout<<"What is the salary of the employee?"<<endl;
		cin>>rate;
			
		BankList[selection2]->addEmployee(new FullTimeEmployee(fName,lName,ssn,salary));		
			
		cout<<"What is the date of birth of employee?"
			<<endl<<"(input MM, ENTER, DD, ENTER, then YYYY)"<<endl;
		cin>>month;cin>>day;cin>>year;
		dateOfB.month=month;dateOfB.day=day;dateOfB.year=year;
		cout<<"What is the date of hire of employee?"
			<<endl<<"(input MM, ENTER, DD, ENTER, then YYYY)"<<endl;
		cin>>month;cin>>day;cin>>year;
		dateOfH.month=month;dateOfH.day=day;dateOfH.year=year;
		BankList[selection2]->getEmployees()[BankList[selection2]->getEmployees().size()-1]->setDOB(dateOfB);
		BankList[selection2]->getEmployees()[BankList[selection2]->getEmployees().size()-1]->setDateOfHire(dateOfH);

		
		break;

		case 6:
			//Add Account to Client - 
			//  asks which client, 
			//  asks values for a new account, 
			//  and adds the new account to the vector of accounts of the selected client
			cout<<"Which bank?"<<endl;
			for (int g=0; g<BankList.size(); g++){
				cout<<g+1<<".  "<<BankList[g]->getName()<<endl;}
			cin>>selection2;
			selection2--;
			cout<<"Which client would you like to add an account to?"<<endl;
			for (int f=0; f<BankList[selection2]->getClients().size(); f++){
				cout<<f+1<<".  "<<BankList[selection2]->getClients()[f]->getFirstName()<<" "
								<<BankList[selection2]->getClients()[f]->getLastName()<<endl;}
			cin>>selection3;
			selection3--;
			
			cout<<"What is the account number?"<<endl;
				cin>>number;
				cout<<"What year was this account created? (YYYY)"<<endl;
				cin>>year;
				cout<<"Month? (MM)"<<endl;
				cin>>month;
				cout<<"Day? (DD)"<<endl;
				cin>>day;
				cout<<"What is the balance?"<<endl;
				cin>>balance;
				//accounts.push_back(new Account(number,month,day,year, balance));
				BankList[selection2]->getClients()[selection3]->addAccount(new Account(number, month, day, year, balance));
				BankList[selection2]->getClients()[selection3]->display();
			break;
		case 7:
			for (int g=0; g<BankList.size(); g++){

			cout<<g+1<<".  "<<BankList[g]->getName()<<endl;}
			cin>>selection2;
			selection2--;
			payroll=0;
			for (int i=0;i<(BankList[selection2]->getEmployees()).size();i++){
				payroll+=BankList[selection2]->getEmployees()[i]->getWeeklyPay();}
			cout<<"The weekly payroll payout is:  $"<<payroll<<endl;
			break;

		default:
			loop=END;
			break;
	}
}
	system("pause");
	return 0;
}
 





