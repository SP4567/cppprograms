#include<iostream>
using namespace std;
class x
{
    public:
    int i;
    int getdata(void)
    {
        cout<<"\nenter i";
        cin>>i;
        return 0;
    }
    int showdata(void)
    {
        cout<<"\n"<<i;
        return 0;
    }
};
class y
{
    public:
    int j;
    int read()
    {
        cout<<"\nenter j";
        cin>>j;
        return 0;
    }
    int write()
    {
        cout<<"\n"<<j;
        return 0;
    }
};
class z:public x,public y
{
   public:
   int sum()
   {
     int sum=0;
     sum=i+j;
     cout<<"\n"<<sum;
     return 0;
   }
};
int main()
{
    z obj;
    obj.getdata();
    obj.showdata();
    obj.read();
    obj.write();
    obj.sum();
    return 0;
}