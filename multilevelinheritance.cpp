#include<iostream>
#include<string.h>
using namespace std;
class employee
{
    string employee_name;
    string employee_post;
    float da,pf,hra;
    public:
    employee()
    {
        employee_name=" ";
        employee_post=" ";
        da=pf=hra=0.0;
    }
    ~employee()
    {
        cout<<"heyy object is destryed!!!!";
    }
    int get_data(void);
};
int employee::get_data(void)
{
    cout<<"\nenter name of the employee:";
    cin>>employee_name;
    cout<<employee_name;
    cout<<"\nenter post of the omployee:";
    cin>>employee_post;
    cout<<employee_post;
    cout<<"\nenter daily allowances of thet employee:";
    cin>>da;
    cout<<da;
    cout<<"\nenter provident fund of the employee:";
    cin>>pf;
    cout<<pf;
    cout<<"\nenter house rent allowance of that employee:";
    cin>>hra;
    cout<<hra;
    return 0;
}
class employee_dat:public employee
{
     float basic_salary;
     public:
     int salary(void);
};
int employee_dat::salary(void)
{
   basic_salary=da+pf+hra;
   cout<<"basic salary of employee is:"<<basic_salary;
   return 0;
}
class emp_dat:public employee_dat
{
    float bonus;
    float total_salary;
    public:
    int total_salary(void);
};
int emp_dat::total_salary(void)
{
    total_salary=bonus+basic_salary;
    cout<<"total salary of the employee is:"<<total_salary;
    return 0;
}
int main()
{
    emp_dat t;
    t.get_data(void);
    t.salary(void);
    t.total_salary(void);
    return 0;
}