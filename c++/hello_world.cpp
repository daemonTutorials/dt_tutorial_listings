// C++ Hello World

 
#include <iostream>
#include <cstdlib> 

using namespace std; 
 
int main(int argc, char *argv[])
{
    // Variablen
    int i = 1;
    string name;
    
    // Execute
    cout << "Hello World!" << endl;
    cout << "Wert der Variable i: " << i << endl;
    cout << "Dein Name: ";
    cin >> name; cout << "Eingegebener Name: " << name << "\a" << endl; // Zum Name abfragen und ausgeben
    cout << "Umlaute: ü ä ö" << endl;
    
    return EXIT_SUCCESS;
}

