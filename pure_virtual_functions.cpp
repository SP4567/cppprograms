#include<iostream>
using namespace std;
class x
{
    public:
    virtual void display()=0;
};
class y:public x
{
    public:
    void display()
    {
        cout<<"display method at class x";
    }
};
int main()
{
    x *t;
    y s;
    t=&s;
    t->display();
    return 0;
}