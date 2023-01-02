#include <iostream.h>
#include <conio.h>
void main()//creating main function
{
int n,t,cube=1,sum=0;//taking variables
cout<<"\n enter a number";
cin>>n;
t=n;
while(t>0)//taking a loop
{
int digit=t%10;
cube=digit*digit*digit;//calculating cube of digit
sum=sum+cube;//calculating sum of cube of digit
t=t/10;
}
if(sum==n)//checking condition
cout<<n<<"is an armstrong number";
else
cout<<n<<"is not an armstrong number";
}//main closed