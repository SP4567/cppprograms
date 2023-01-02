#include<iostream>
using namespace std;
int main(){
char op;int a,b;
cout<<"enter the operator \n";
cin>>op;
cout<<"enter two numbers \n";
cin>>a>>b;
switch(op)
{
case '+':cout<<"sum is \n"<<a<<"+"<<b<<"="<<a+b;
break;
case '-':cout<<"difference is \n"<<a<<"-"<<b<<"="<<a-b;
break;
case '*':cout<<"product is \n"<<a<<"*"<<b<<"="<<a*b;
break;
case '/':cout<<"quotient is \n"<<a<<"/"<<b<<"="<<a/b;
break;
case '%':cout<<"remainder is \n"<<a<<"%"<<b<<"="<<a%b;
break;
default:cout<<"wrong choice";
break;
return 0;
}
}
