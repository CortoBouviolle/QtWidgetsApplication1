#pragma once
#include <iostream>
using namespace std;
#include <string>
class passenger {
private:
	string identifiant;
	int classe;
	bool age;
	bool sex;
	bool survived;
public:
	passenger(){;}
	passenger(string, int, bool, bool, bool);
	void displayPassenger();

	string getIdentifiant() { return identifiant; }
	int getClasse() { return classe;}
	bool getAge() { return age; }
	bool getSex() { return sex; }
	bool getSurvived() { return survived; }

	void setIdentifiant(string _identifiant) { identifiant=_identifiant; }
	void setClasse(int _classe) { classe= _classe; }
	void setAge(bool _age) { age=_age; }
	void setSex(bool _sex) { sex=_sex; }
	void setSurvived(bool _survived) { survived=_survived; }
};