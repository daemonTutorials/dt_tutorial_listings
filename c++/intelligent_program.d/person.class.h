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
    public:
        
        string firstName; 
        string lastName; 
        string age; 
        string birthday;
        Person();
        string content2;
        string getAttribute(int nameindex);
        bool setAttribute(int nameindex, string content);
        string getAll();
};

Person::Person()
{
    this->firstName = "";
    this->lastName = "";
    this->age = "";
    this->birthday = "";
}

string Person::getAttribute(int nameindex)
{
    switch (nameindex)
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

bool Person::setAttribute(int i, string content)
{
    if (i == 1)
    {
        this->content2 = content;
        cout << this->content2 << endl;
        this->firstName += content;
        cout << this->firstName << endl;
        return true;
    }
    else if (i == 2)
    {
        this->lastName += content;
        return true;
    }
    else if (i == 3)
    {
        this->age += content;
        return true;
    }
    else if (i == 4)
    {
        this->birthday += content;
        return true;
    }
    else {
        return false;
    }
    
    return true;
}

string Person::getAll()
{
    string all = this->firstName + ", " + this->lastName + " | " + this->age + " | " + this->birthday;
    return all;
}
