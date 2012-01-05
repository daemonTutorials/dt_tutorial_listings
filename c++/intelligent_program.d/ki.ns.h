#ifndef KI_NS_H_
#define KI_NS_H_

#include <string>
#include <iostream>

using std::string;

namespace KI {

    // Variablen
    const string welcomeMSG = "Willkommen";
    const string meMark = ">>";

    // Methoden
    string Welcome(string name);
    string GetSimpleAnswer(string question);
    
}


#endif
