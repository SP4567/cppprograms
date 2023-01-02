#include <iostream>
using namespace std;
int main()
{
int arr1[3][3],arr2[3][3],arr3[3][3],arr4[3][3],arr5[3][3],i,j;
cout<<"enter elements in 1st array";
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
cin>>arr1[i][j];
}
}
cout<<"the original matrix is \n";
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
cout<<" "<<arr1[i][j];
}
cout<<"\n";
}
cout<<"enter the elements in 2nd matrix";
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
cin>>arr2[i][j];
}
}
cout<<"the original matrix is \n";
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
cout<<" "<<arr2[i][j];
}
cout<<"\n";
}
cout<<"sum of two matrix is \n";
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
arr3[i][j]=arr1[i][j]+arr2[i][j];
cout<<" "<<arr3[i][j];
}
cout<<"\n";
}
cout<<"difference of two matrix is \n";
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
arr4[i][j]=arr1[i][j]-arr2[i][j];
cout<<" "<<arr4[i][j];
}
cout<<"\n";
}
cout<<"product of two matrix is \n";
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
arr5[i][j]=arr1[i][j]*arr2[i][j];
cout<<" "<<arr5[i][j];
}
cout<<"\n";
}
cout<<"transpose of first matrix is \n";
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
cout<<" "<<arr1[j][i];
}
cout<<"\n";
}
cout<<"transpose of second matrix is \n";
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
cout<<" "<<arr2[j][i];
}
cout<<"\n";
}
return 0;
}