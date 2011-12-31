/* 
 * Title: Person Class
 * Description: The Instances of this class describe a person. 
 * Author: Maik
 * Date: 2011/12/28 
 * 
 */



class Person {
    private:
        char firstName[100]; 
        char lastName[100]; 
        char age[5]; 
        char birthday[15];
    public:
        
        char getAttribute(int nameindex);
        int setAttribute(int nameindex, string content);
        char getAll();
};

char Person::getAttribute(int nameindex)
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
        char msg[100] = 'No Params';
        return msg;
        break;
    }
    
    return 0;
}

int Person::setAttribute(int nameindex, string content)
{
    switch (nameindex)
    {
    case 1:
        strcpy(this->firstName, content);
        return 0;
        break;
        
    case 2:
        strcpy(this->lastName, content);
        return 0;
        break;
        
    case 3:
        strcpy(this->age, content);
        return 0;
        break;
        
    case 4:
        strcpy(this->birthday, content);
        return 0;
        break;
        
    default:
        return 1;
        break;
    }
    
    return 0;
}

char Person::getAll()
{
    char all[200] = this->firstName + ", " + this->lastName + " | " + this->age + " | " + this->birthday;
    return all;
}
