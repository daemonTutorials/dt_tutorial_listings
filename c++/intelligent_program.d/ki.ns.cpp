#include "ki.ns.h"

namespace KI {

    string Welcome(string name)
    {
        return meMark + " " + welcomeMSG + " " + name; 
    }
    
    string GetSimpleAnswer()
    {
        return meMark + " I got an Question!";
    }
}
