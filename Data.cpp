#include "Data.h";
#include <fstream>
void Data::readFile(string fileName) {
	string line;
	ifstream myFile(fileName, ifstream::in);
	if (myFile.is_open()) {
		//les 5 getlines sont pour éviter les 5 premières lignes d'explication
		getline(myFile, line);
		getline(myFile, line);
		getline(myFile, line);
		getline(myFile, line);
		getline(myFile, line);

		string id;
		bool clas, ag, sx, surv;
		while (!myFile.eof()) {
			myFile >> id;
			myFile >> clas;
			myFile >> ag;
			myFile >> sx;
			myFile >> surv;
			list_passenger.push_back(passenger(id, clas, ag, sx, surv));
		}
		myFile.close();
	}
}