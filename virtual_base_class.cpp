#include<iostream>
#include<string.h>
using namespace std;
class base
{
    public:
    string name;
    int roll_no;
    int get_data_and_show()
    {
        cout<<"enter the name of the student:";
        cin>>name;
        cout<<"enter roll_number of the student:";
        cin>>roll_no;
        return 0;
    }
};
class marks:public virtual base
{
    public:
    int m1,m2,m3,m4,m5,m6,total_marks;
    int get_marks()
    {
    cout<<"enter the marks of the student:";
    cin>>m1>>m2>>m3>>m4>>m5>>m6;
    total_marks=m1+m2+m3+m4+m5+m6;
    cout<<"total marks are:"<<total_marks;
    return 0;
    }
};
int main()
{
    marks m;
    m.get_data_and_show();
    m.get_marks();
    return 0;
}