#include "ki.ns.h"

namespace KI {

    string Welcome(string name)
    {
        return meMark + " " + welcomeMSG + " " + name; 
    }
    
    string GetSimpleAnswer(string question)
    {
        return meMark + "Your Question: " + question;
    }
}
