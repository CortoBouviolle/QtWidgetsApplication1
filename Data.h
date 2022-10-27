#pragma once
#pragma once
#include <iostream>
using namespace std;
#include <string>
#include "passenger.h"
#include <vector>
class Data {
private: 
	vector<passenger> list_passenger;
public:
	void readFile(string fileName);
};