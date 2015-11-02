 #include"Person.h"

//CONSTRUCTORS AND DECONSTRUCTOR FOR EMPLOYEE AND CLIENT
Person::Person(){}
Person::Person(string firstName, string lastName, string ssn/*, Date dateOfBirth*/){
	this->firstName=firstName;
	this->lastName=lastName;
	this->ssn=ssn;
	/*this->dateOfBirth=dateOfBirth;*/}

Person::~Person(){}

//DISPLAY
void Person::display(){
	cout<<firstName<<" "<<lastName<<" SSN: "<<ssn<<endl
		<<"Date of birth: "<<dateOfBirth.month<<"/"<<dateOfBirth.month<<"/"<<dateOfBirth.year<<endl;}


//SETTERS
void Person::setFirstName(string firstName){
	this->firstName=firstName;}
void Person::setLastName(string lastName){
	this->lastName=lastName;}
void Person::setSSN(string ssn){
	this->ssn=ssn;}
void Person::setDOB(Date dateOfBirth){
	this->dateOfBirth=dateOfBirth;}

//GETTERS
string Person::getFirstName(){
	return firstName;}
string Person::getLastName(){
	return lastName;}
string Person::getSSN(){
	return ssn;}