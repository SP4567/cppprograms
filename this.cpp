#include <iostream>  
using namespace std;  
class Employee {  
   public:  
       int id;      
       string name;
       long salary;  
       Employee(int id, string name, long salary)    
        {    
            this->id = id;    
            this->name = name;    
            this->salary = salary;   
        }    
       int display()    
        {    
            cout<<"\n"<<id<<"\n"<<name<<"\n"<<salary;
            return 0;    
        }    
};  
int main() 
{  
    Employee ob1 =Employee(152, "Sp", 8900000); //creating an object of Employee   
    Employee ob2 =Employee(139, "My", 8900000); //creating an object of Employee  
    ob1.display();    
    ob2.display();    
    return 0;  
}  