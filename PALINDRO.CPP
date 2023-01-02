#include <iostream>
using namespace std;
int main()//creation of main function
{
int n,t,r=0;//taking all the necessary variables.
cout<<"\n enter a number";//cout function is used for displaying messages.
cin>>n;//cin is used for taking input from the user.
t=n;
while(t>0)
{
int digit=t%10;
r=(r*10)+digit;
t=t/10;
}//while closed
if(r==n)//if statement for checking condition.
cout<<n<<" is a palindrome number";
else
cout<<n<<" is not a palindrome number";
return 0;
}//main closed

