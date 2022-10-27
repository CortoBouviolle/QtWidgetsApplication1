#include "passenger.h"
passenger::passenger(string indentifiant, int classe, bool age, bool sex, bool survived) {
	this->identifiant = identifiant;
	this->classe = classe;
	this->age = age;
	this->sex = sex;
	this->survived = survived;
}
void passenger::displayPassenger() {
	cout << "identifiant: " << identifiant<<" classe: "<<classe<<" age: "<<age <<" sex: "<<sex<<" survived: "<< survived<<endl;
}
