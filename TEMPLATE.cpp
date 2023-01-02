#include<iostream>
using namespace std;
template<class T>
class base
{
    T a;
    public:
    int get_data()
    {
       cout<<"enter a number!!\n";
       cin>>a;
       return 0;
    }
    int put_data()
    {
        cout<<"n\the value of a is\n"<<a;
        return 0;
    }
};
int main()
{
    base<int>v1;
    base<float>v2;
    v1.get_data();
    v1.put_data();
    v2.get_data();
    v2.put_data();
    return 0;
}
