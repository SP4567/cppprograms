#include <iostream.h>
#include <conio.h>
void main()//creating main function
{
int a,b,c;
cout<<"enter three numbers";
cin>>a>>b>>c;//inputting three numbers
int s=(a>b)?a:b;
int p=(s>c)?s:c;
cout<<"The largest number among the three is" <<p;
}//main closed