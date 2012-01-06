
#include "person.class.h"

namespace PersonNS {

Person::Person()
{
    this->firstName = "";
    this->age = "";
    this->question = "";
}

string Person::getAttribute(int index)
{
    switch (index)
    {
    case 1:
        return this->firstName;
        break;
        
    case 2:
        return this->age;
        break;
        
    case 3:
        return this->question;
        break;
        
    default:
        string msg = "No Params";
        return msg;
        break;
    }
    
    return 0;
}

bool Person::setAttribute(int index, string content)
{
    switch (index) {
    case 1:
        this->firstName += content;
        // std::cout << this->firstName << endl;
        return true;
        break;
        
    case 2:
        this->age += content;
        return true;
        break;
        
    case 3:
        this->question = content;
        return true;
        break;
        
    default:
        return false;
        break;
    
    }
    return true;
}

string Person::getAll()
{
    string all = this->firstName + " | " + this->age + " | " + this->question;
    return all;
}

}
