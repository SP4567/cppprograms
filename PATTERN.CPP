#include<iostream.h>
#include<conio.h>
void pattern1()
{
int i,j;
for(i=0;i<5;i++)
{
for(j=0;j<i;j++)
{
cout<<" "<<j;
}
cout<<"\n";
}
}
void pattern2()
{
int i,j;
for(i=0;i<5;i++)
{
for(j=0;j<5;j++)
{
cout<<" "<<i;
}
cout<<"\n";
}}
void pattern3()
{
int i,j;
for(i=0;i<5;i++)
{
for(j=0;j<5;j++)
{
cout<<" "<<i;
}
cout<<"\n";
}
}
void pattern4()
{
int i,j;
for(i=0;i<8;i++)
{
for(j=0;j<8;j++)
{
cout<<" "<<i;
}
cout<<"\n";
}}
void main()
{
pattern1();
pattern2();
pattern3();
pattern4();
}