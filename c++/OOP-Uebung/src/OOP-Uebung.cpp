//============================================================================
// Name        : OOP-Uebung.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Fahrzeug.h"
#include "LKW.h"
#include "PKW.h"

using namespace std;

int main() {
	Fahrzeug car;

	car.setName("Benz");
	car.setProducer("Mercedes");
	car.setMotorType("Benzin");
	car.setMaxSpeed(300);
	car.setKMAmount(100);
	car.setSpeed(80);

	cout.precision(300);
	cout << "The car arrives in " << car.getRestTimeToArrive() << " hours!" << endl;
	cout << "The car arrives in " << car.getRestTimeToArrive()*60 << " minutes!" << endl;
	cout << "The car arrives in " << (car.getRestTimeToArrive()*60)*60 << " seconds!" << endl;
	cout << "The car arrives in " << ((car.getRestTimeToArrive()*60)*60)*100 << " milliseconds!" << endl;

	return 0;
}
