#include<iostream >
using namespace std;
int main()
{
int i,j;char op;
int arr1[3][3],arr2[3][3],arr3[3][3],arr4[3][3],arr5[3][3];
cout<<"\nenter the elments in the 1st matrix:";
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
cin>>arr1[i][j];
}
}
cout<<"\nthe original matrix is:\n";
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
cout<<" "<<arr1[i][j];
}
cout<<"\n";
}
cout<<"\nenter the elements in the 2nd matrix:\n";
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
cin>>arr2[i][j];
}
}
cout<<"\nthe original matrix is:\n";
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
cout<<" "<<arr2[i][j];
}
cout<<"\n";
}
cout<<"enter the operation to be performed:\n";
cin>>op;
switch(op)
{
case '+':
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
arr3[i][j]=arr1[i][j]+arr2[i][j];
cout<<" "<<arr3[i][j];}
cout<<"\n";}
break;
case '-':
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
arr4[i][j]=arr1[i][j]-arr2[i][j];
cout<<" "<<arr4[i][j];}
cout<<"\n";}
break;
case '*':
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
arr5[i][j]=arr1[i][j]*arr2[i][j];
cout<<" "<<arr5[i][j];}
cout<<"\n";}
break;
case '~':
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
cout<<" "<<arr1[j][i];}
cout<<"\n"; 
}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
cout<<" "<<arr2[j][i];}
cout<<"\n";
}
break;
default:
cout<<"invalid choice";
}
return 0;
}

 




