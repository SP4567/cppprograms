#include<iostream>
using  namespace std;
int main()
{
int arr[11],i,n,front=0,last,middle;
cout<<"enter the size of the array \n";
cin>>n;
cout<<"enter the elements in the array \n";
for(i=0;i<n;i++)
{
cin>>arr[i];
}
cout<<"the original array is \n";
for(i=0;i<n;i++)
{
cout<<" "<<arr[i];
}
cout<<"enter the value to be searched \n";
int value;
cin>>value;
last=n-1;
for(i=0;i<n;i++)
{
if(front<=last)
{
middle=(front+last)/2;
if(value==arr[middle])
cout<<"\nvalue at mid is\n"<<middle;
else if(value>arr[middle]){
front=middle+1;
front++;
cout<<"\nvalue is\n"<<value<<"\nfound at location\n"<<front;}
else{
last=middle-1;
last--;
cout<<"\nvalue is\n"<<value<<"\nfound at location\n"<<last;}
break;
}
}
return 0;
}


