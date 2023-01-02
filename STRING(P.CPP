#include <iostream.h>
#include <conio.h>
void main()
{
char str[5];int i,len,n;
len=0;
cout<<"enter the size of the string\n";
cin>>n;
cout<<"enter the elments in the array\n";
for(i=0;i<n;i++)
{
cin>>str[i];
}
cout<<"the orignal string is:";
for(i=0;i<n;i++)
{
cout<<""<<str[i];
}
for(i=0;str[i]!='\0';i++)
len=i-1;
i=0;
while(str[i]==str[len])
{
i++;
len--;
if(len<i)
break;
}
if(len<i)
cout<<"\npalindrome";
else
cout<<"\nnot palindrome";
}