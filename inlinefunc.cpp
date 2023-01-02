#include<iostream>
using namespace std; 
class person
{
    char name[64];
    int age;
    char address[64];
    float salary;
    public:
    person()
    {
        cout<<"details of a person";
        cout<<"\nname";
        cin>>name;
        cout<<"age:";
        cin>>age;
        cout<<"address:";
        cin>>address;
        cout<<"salary";
        cin>>salary;
    }
    void disp()
    {
        cout<<"\n\n-----Salary Slip-----";
        cout<<"\nName:"<<name;
        cout<<"\nage:"<<age;
        cout<<"\naddress:"<<address;
        cout<<"\nsalary"<<salary;
    }
    void swap(int &x,int &y)
    {
        int temp=x;
        x=y;
        y=temp;
    }
    void eyage(person obj[]);
};
void person::eyage(person obj[])
{
    int j,youngest,eldest;
    youngest=obj[0].age;
    eldest=obj[0].age;
    for(int i=0;i<2;i++)
    {
        if(obj[i].age>eldest)
        {
            eldest=obj[i].age;
        }
        if(obj[i].age<youngest)
        {
            youngest=obj[i].age;
        }
    }
    cout<<"\nyoungest and eldest person's age";
    cout<<"\nthe youngest age:"<<youngest;
    cout<<"\nthe eldest age:"<<eldest;
}
int main()
{
    person obj[2];
    for(int i=0;i<2;i++)
    {
        obj[0].eyage(obj);
    }
}