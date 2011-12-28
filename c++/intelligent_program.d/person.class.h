/* 
 * Title: Person Class
 * Description: The Instances of this class describe a person. 
 * Author: Maik
 * Date: 2011/28/12 
 * 
 */

class Person {
    public: string firstName; string lastName; int age; int birthday;
    Person();
};

// Konstruktor
Person::Person()
{
    firstName = "Frank";
    lastName = "Mueller";
    age = 14;
    birthday = 19970901;
}
