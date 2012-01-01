/*
 * 
 * Title: A KI Simulator
 * Author: Maik
 * Date: 2011/28/12
 * 
 * Depends = ('person.class.h','ki.ns.h')
 */

//#include "std_lib_facilites.h"
#include <iostream>
#include <cstdlib>
#include <string>

#include "person.class.h"
#include "ki.ns.h"

using namespace std;

void fillIn(PersonNS::Person &person, string &firstName, string &lastName, string &age);
void kiInit(PersonNS::Person &person);

int main()
{
    PersonNS::Person person;
    //Variablen
    const string line = "=============================="; // Trennlinie
    char datacheck; // Use ' ' instead of " "
    
    string age;
    string firstName;
    string lastName;
    
    // IO
    cout << "Getting Data" << endl << line << endl;
    
    cout << "Your First Name: "; cin >> firstName; // Um den Vornamen zu bekommen
    cout << "Your Last Name: "; cin >> lastName; // Um den Nachnamen zu bekommen
    cout << "Your age: "; cin >> age; // Um das Alter zu bekommen | Berechne ich spaeter anhand des Geburtsjahrs
    cout << endl;
    
    cout << "Data Check" << endl << line << endl;
    
    cout << "First Name: " << firstName << endl;
    cout << "Last Name: " << lastName << endl;
    cout << "Age: " << age << endl;
    
    cout << endl << line << endl;
    cout << "All right\?[y/n]"; cin >> datacheck; // Nutzerueberpruefung
    
    if (datacheck == 'y' && age.length() <= 2)
    {
        
        fillIn(person, firstName, lastName, age);
        /* cout << person.firstName << endl;
        cout << "Daten befuellt" << endl;
        string all = person.getAll();
        cout << "Daten geholt" << endl;
        cout << endl << line << endl;
        cout << all << endl;
        cout << endl << line << endl; */
        
        
        // KI
        cout << endl << line << endl;
        kiInit(person);
        
        return EXIT_SUCCESS;
    }
    else
    {
        return EXIT_FAILURE;
    }
    
    
    return EXIT_SUCCESS;
}

void fillIn(PersonNS::Person &person, string &firstName, string &lastName, string &age)
{
    person.setAttribute(1, firstName);
    // cout << firstName << " | " << firstHandler << endl;
    person.setAttribute(2, lastName);
    // cout << lastName << " | " << secondHandler << endl;
    person.setAttribute(3, age);
}

void kiInit(PersonNS::Person &person)
{
    // Get Name
    string name = person.getAttribute(1) + " " + person.getAttribute(2);
    string text = KI::Welcome(name);
    cout << text << " | " << true << endl;
}
