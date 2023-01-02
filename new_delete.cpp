#include<iostream>
using namespace std;
class student
{
    public:int age;
    student()
    {
        age=12;
    }
    void get_age()
    {
        cout<<"age is:"<<age;
    }
};
int main()
{
    student *ptr=new student();
    ptr->get_age();
    delete ptr;
    cout<<"\nptr deleted"<<"\n"<<ptr;
    return 0;
}