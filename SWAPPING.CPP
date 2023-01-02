#include <iostream>
using namespace std;
int swap(int *a,int *b);
int main()
{
int a,b;
cout<<"enter two numbers for swapping";
cin>>a>>b;
swap(&a,&b);
cout<<"After swapping the numbers are"<<a<<" "<<b;
return 0;
}
int swap(int *x,int *y)
{
*x=*x+*y;
*y=*x-*y;
*x=*x-*y;
return 0;
}
