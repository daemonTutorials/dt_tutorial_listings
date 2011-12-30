/* 
 * Title: Person Class
 * Description: The Instances of this class describe a person. 
 * Author: Maik
 * Date: 2011/12/28 
 * 
 */

#include <string.h>


class Person {
    private: 
        string firstName; 
        string lastName; 
        string age; 
        string birthday;
    
    public:
        Person();
        string getAttribute(string name);
        int setAttribute(string name, string content);
};

// Konstruktor
Person::Person()
{
    firstName = "Frank";
    lastName = "Mueller";
    age = "14";
    birthday = "19970109";
}

string Person::getAttribute(string name)
{
    switch (name)
    {
    case "firstName":
        return this->firstName;
        break;
        
    case "lastName":
        return this->lastName;
        break;
        
    case "age":
        return this->age;
        break;
        
    case "birthday":
        return this->birthday;
        break;
        
    default:
        return "I have no params";
        break;
    }
    
    return 0;
}
