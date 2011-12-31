// C++ Hello World

/*
 * depends=('/c++/std_lib_facilites.h')
 */
 
 
#include "std_lib_facilities.h" // Kapseln des IOStreams

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
    
    return EXIT_SUCCESS;
}

