/*
 * 
 * Title: A KI Simulator
 * Author: Maik
 * Date: 2011/28/12
 * 
 * Depends = ('std_lib_facilites.h', 'person.class.h')
 */

#include "std_lib_facilites.h"
//#include "person.class.h"
// TODO: Implement Person Class

int main()
{
    //Variablen
    string line = "=============================="; // Trennlinie
    char datacheck; // Use ' ' instead of " "

    int age;
    int birthday;
    string firstName;
    string lastName;
    
    // IO
    cout << "Getting Data" << endl << line << endl;
    
    cout << "Your First Name: "; cin >> firstName; // Um den Vornamen zu bekommen
    cout << "Your Last Name: "; cin >> lastName; // Um den Nachnamen zu bekommen
    cout << "Your age: "; cin >> age; // Um das Alter zu bekommen | Berechne ich spaeter anhand des Geburtsjahrs
    cout << "Your Birthday[YYYYDDMM]: "; cin >> birthday;// Um das Geburtsjahr zu bekommen
    cout << endl;
    
    cout << "Data Check" << endl << line << endl;
    
    cout << "First Name: " << firstName << endl;
    cout << "Last Name: " << lastName << endl;
    cout << "Age: " << age << endl;
    cout << "Birthday: " << birthday << endl;
    
    cout << endl << line << endl;
    cout << "All right\?[y/n]"; cin >> datacheck; // Nutzerueberpruefung
    
    if (datacheck == 'y')
    {
        return EXIT_SUCCESS;
    }
    else
    {
        return EXIT_FAILURE;
    }
    
    // KI
    
    
    return EXIT_SUCCESS;
}
