/* 
 * Title: Person Class
 * Description: The Instances of this class describe a person. 
 * Author: Maik
 * Date: 2011/12/28 
 * 
 */



class Person {
    private: 
    
    public:
        
        string firstName; 
        string lastName; 
        string age; 
        string birthday;
        Person();
        string getAttribute(int nameindex);
        int setAttribute(int nameindex, string content);
        string getAll();
};

// Konstruktor
Person::Person()
{
    this->firstName = "Frank";
    this->lastName = "Mueller";
    this->age = "14";
    this->birthday = "19970109";
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
        return "I have no params";
        break;
    }
    
    return 0;
}

int Person::setAttribute(int nameindex, string content)
{
    switch (nameindex)
    {
    case 1:
        this->firstName = content;
        return 0;
        break;
        
    case 2:
        this->lastName = content;
        return 0;
        break;
        
    case 3:
        this->age = content;
        return 0;
        break;
        
    case 4:
        this->birthday = content;
        return 0;
        break;
        
    default:
        return 1;
        break;
    }
    
    return 0;
}

string Person::getAll()
{
    string all = this->firstName + ", " + this->lastName + " | " + this->age + " | " + this->birthday;
    return all;
}
