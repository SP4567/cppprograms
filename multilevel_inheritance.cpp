#include<iostream>
#include<string>
using namespace std;
class student
{
public:
string name;int rollNumber;
student()
{
  name=' ',rollNumber=0;
}
void cms_student(void)
{
cout<<"\nenter name of the student:";
cin>>name;
cout<<"\nenter roll_number of the student:";
cin>>rollNumber;
}
void display(void)
{
  cout<<"name:"<<name;
  cout<<"\nrollNumber:"<<"\n"<<rollNumber;
}
};
class Exam:public student
{
  public:
  int user_id,m1,m2,m3,m4,m5,m6;string password;
  void school(void)
  {
   cout<<"\nenter user id:\n";
   cin>>user_id;
   cout<<"user_id:\n"<<user_id;
   cout<<"\nenter password:\n";
   cin>>password;
   cout<<"password:\n"<<password;
   cout<<"\nenter marks for 1st subject:";
   cin>>m1;
   cout<<"\nenter marks for 2nd subject:";
   cin>>m2;
   cout<<"\nenter marks for 3rd subject:";
   cin>>m3;
   cout<<"\nenter marks for 4th subject:";
   cin>>m4;
   cout<<"\nenter marks for 5th subject:";
   cin>>m5;
   cout<<"\nenter marks for 6th subject:";
   cin>>m6;
  }
  void display1(void)
  {
    cout<<"\nmarks for 1st subject:"<<m1<<"\n";
    cout<<"marks for 2nd subject:"<<m2<<"\n";
    cout<<"marks for 3rd subject:"<<m3<<"\n";
    cout<<"marks for 4th subject:"<<m4<<"\n";
    cout<<"marks for 5th subject:"<<m5<<"\n";
    cout<<"marks for 6th subject:"<<m6<<"\n";
  }
};
class result:public Exam
{
  public:
  float total_marks,cgpa;
  void total_m(void)
  { 
  total_marks=m1+m2+m3+m4+m5+m6;
  cgpa=((total_marks*100)/600)/9.5;
  cout<<"total marks: "<<total_marks<<"\ncgpa is:"<<cgpa;
  }
};
int main()
{
  result obj1;
  obj1.cms_student();
  obj1.display();
  obj1.school();
  obj1.display1();
  obj1.total_m();
}

