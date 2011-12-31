
#include "person.class.h"

namespace PersonNS {

Person::Person()
{
    this->firstName = "";
    this->lastName = "";
    this->age = "";
    this->birthday = "";
}

string Person::getAttribute(int index)
{
    switch (index)
    {
    case 1:
        return this->firstName;
        break;
        
    case 2:
        return this->lastName;
        break;
        
    case 3:
        return this->age;
        break;
        
    case 4:
        return this->birthday;
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
        this->lastName += content;
        return true;
        break;
        
    case 3:
        this->age += content;
        return true;
        break;
    
    case 4:
        this->birthday += content;
        return true;
        break;
    default:
        return false;
    
    }
    return true;
}

string Person::getAll()
{
    string all = this->firstName + ", " + this->lastName + " | " + this->age + " | " + this->birthday;
    return all;
}

}
