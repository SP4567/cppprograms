#include<iostream>
using namespace std;
class Person
{
    char name[64];int age;char address[64];float totalsal;
    public:
    person()
    {

    }
    void addperson(){
        cout<<"\nnter the name of person: ";
        cin>>name;
        cout<<"\nenter age:  ";
        cin>>age;
    }
    void display(){
        cout<<name;
        cout<<age;
    }
};
int main()
{

    Person p[10];
    for(int i=0;i<9;i++){
        p[1].addperson();
        p[1].display();

    }
return 0;
};