#include<iostream>
using namespace std;
class swaps
{
    int a,b;
    public:
    swaps()
    {
        a=b=0;
    }
    friend void swapping_func(swaps c);
};
void swapping_func(swaps c)
{
    int temp;
    cout<<"\nenter two numbers for swapping:";
    cin>>c.a>>c.b;
    cout<<"\nbefore swapping the numbers are:"<<c.a<<","<<c.b;
    temp=c.a;
    c.a=c.b;
    c.b=temp;
    cout<<"\nafter swapping the numbers are:"<<c.a<<","<<c.b;
}
int main()
{
    swaps c;
    swapping_func(c);
    return 0;
}
