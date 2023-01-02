#include<iostream>
using namespace std;
void main()
{
int arr[3][3],i,j,sbe,snbe,md,amd,bmd;//sum of boundary elements and non-boundary  elements
cout<<"\nenter the elements in the array";
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
cin>>arr[i][j];
}
}
cout<<"\nthe original matrix is";
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
cout<<" "<<arr[i][j];
}
cout<<"\n";
}
cout<<"\nthe transpose of matrix is \n";
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
cout<<" "<<arr[j][i];
}
cout<<"\n";
}
sbe=0,snbe=0;
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
if(i==0||i==2||j==0||j==2)
{
sbe=sbe+arr[i][j];
}
else
{
snbe=snbe+arr[i][j];
}
}
}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
if(i==j)
{
md=md+arr[i][j];
cout<<" "<<md;
}
}
}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
if(i<j)
{
amd=amd+arr[i][j];
cout<<" "<<amd;
}
}
}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
if(i>j)
{
bmd=bmd+arr[i][j];
cout<<" "<<bmd;
}
}
}
cout<<"sum of boundary elements is \n"<<sbe;
cout<<"sum of non boundary elements is \n"<<snbe;
cout<<"sum of elements of the main diagonal is \n"<<md;
cout<<"sum of elements above main diagonal is \n"<<amd;
cout<<"sum of elements below main diagonal is \n"<<bmd;
}

