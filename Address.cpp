#include"Address.h"

//CONSTRUCTORS AND DECONSTRUCTOR
Address::Address(){}
Address::Address(string streetAddress, string city, string state,string zip){
	this->streetAddress=streetAddress;
	this->state=state;
	this->city=city;
	this->zip=zip;}
Address::Address(const Address &other){
	streetAddress=other.streetAddress;
	state=other.state;
	city=other.city;
	zip=other.zip;}
Address::~Address(){
}

//DISPLAY
void Address::display(){
	cout << streetAddress <<","<<endl<< city <<", "<< state <<" "<< zip <<endl;}


//SETTERS
void Address::setStreetAddress(string streetAddress){
	this->streetAddress=streetAddress;}
void Address::setCity(string city){
	this->city=city;}
void Address::setState(string state){
	this->state=state;}
void Address::setZip(string zip){
	this->zip=zip;}


//GETTERS
string Address::getStreetAddress(){
	return streetAddress;}
string Address::getCity(){
	return city;}
string Address::getState(){
	return state;}
string Address::getZip(){
	return zip;}