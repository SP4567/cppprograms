#include<iostream>
using namespace std;
class exceptions
{
   int a,b;
   public:
   int arithmatic()
   {
    cout<<"enter two numbers!!";
    cin>>a>>b;
    int x=a-b;
    try
    {
       if(x!=0)
       {
        cout<<"result is:"<<a/x<<"\n";
       }
       else{
        throw(x);
       }
    }
    catch(int i)
    {
       cout<<"exception caught!!"<<x<<"\n";
    }
   }
};
int main()
{
    exceptions e;
    e.arithmatic();
    return 0;
}