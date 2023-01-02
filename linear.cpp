#include<iostream>
using namespace std;
class linear
{
    public:
int linear_search()
{
    int arr[5],i,val,flag;
    flag=0;
    cout<<"\nenter the elements in the array\n";
    for(i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    cout<<"\nthe array is\n";
    for(i=0;i<5;i++)
    {
        cout<<arr[i];
    }
    cout<<"\nenter the value to be searched\n";
    cin>>val;
    for(i=0;i<5;i++)
    {
        if(val==arr[i])
        {
        flag++;
        cout<<"\nthe value is\n"<<val<<"\nfound at location\n"<<i; 
        }
    }
       if(flag==0)
        {  
        cout<<"\nnot found\n";
        }
    return 0;
}
};
int main()
{
    linear m;
    m.linear_search();
    return 0;
}