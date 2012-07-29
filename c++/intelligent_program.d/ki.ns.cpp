#include "ki.ns.h"

namespace KI {

    string Welcome(string name)
    {
        return meMark + " " + welcomeMSG + " " + name; 
    }
    
    string GetSimpleAnswer(string question)
    {
        if (question == "help" || question == "Help")
        {
            string help = "=======================\n=         Hilfe       =\n=======================\n=                     =\n= <<  Your Question...=\n=    ^                =\n=    |                =\n= A space!!           =\n=======================\n";
            return help;
        } else {
            return meMark + "Your Question: " + question;
        }
    
    }
}
