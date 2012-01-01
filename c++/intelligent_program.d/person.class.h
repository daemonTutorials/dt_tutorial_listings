/* 
 * Title: Person Class
 * Description: The Instances of this class describe a person. 
 * Author: Maik
 * Date: 2011/12/28 
 * 
 */

#ifndef PERSON_CLASS_H_
#define PERSON_CLASS_H_

#include <string>

using std::string;

namespace PersonNS {
class Person {
    private:
        
        string firstName; 
        string lastName; 
        string age; 
    public:
        
        Person();
        string content2;
        string getAttribute(int index);
        bool setAttribute(int index, string content);
        string getAll();
};
}
#endif
