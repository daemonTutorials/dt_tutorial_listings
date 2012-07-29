//============================================================================
// Name        : Spielwiese.cpp
// Author      : Maik Woehl
// Version     : 0.1
// Copyright   : CC-BY
// Description : Hello World in C++, Ansi-style
//============================================================================

// System Libraries
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>

// User Libraries
#include "tools.h"

// Use Namespace
using namespace std;

int main(int argc,char *argv[]) {

	int x = 3, y = 5; // Werte initialisieren

	// Willkommensnachricht erstellen und ausgeben
	char welcome[70] = "Willkommen zum besten Test aller Zeiten!\nWieviel ist %i + %i?\n";
	printf( welcome, x,y );

	// Abfrage vorbereiten
	int result;
	char input[256];

	// Abfrage durchfuehren und in Integer konvertieren
	fgets( input, 256, stdin );
	result = atoi( input );

	if ( result == 8 ) {
		cout << endl << "Du bist ein Gewinner!";
	} else {
		cout << endl << "Du bist ein Verlierer!";
	}

	return 0;
}
