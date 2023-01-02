#include <iostream>
using namespace std;
class sampleabstraction
{
private:int a,b;
public:void set(int x,int y)
{
a=x;
b=y;
}
void display()
{
cout<<"the value of a is "<<a<<endl;
cout<<"the value of b is "<<b<<endl;
}
};
int main()
{
sampleabstraction obj1;
obj1.set(10,15);
obj1.display();
}