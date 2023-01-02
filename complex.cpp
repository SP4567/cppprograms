#include<iostream>
using namespace  std;
class complex 
{
    public:
    int real,imag;
    complex()
    {
        real=0;
        imag=0;
    }
    
    complex(int r,int i)
    {
        real=r;
        imag=i;
    }
    void display()
    {
        cout<<real<<"+"<<imag<<"i";
    }
    complex operator++()
    {
        complex c;
        c.real=++real;
        c.imag=++imag;
        return c;
    }
    complex operator++(int)
    {
        complex c;
        c.real=real++;
        c.imag=imag++;
        return c;
    }
    complex operator--(int)
    {
        complex c;
        c.real=real--;
        c.imag=imag--;
        return c;
    }
    
    complex operator+(complex a)
    {
        complex add;
        add.real=real+a.real;
        add.imag=imag+a.imag;
        return add;
    }
    complex operator-(complex a)
    {
        complex sub;
        sub.real=real-a.real;
        sub.imag=imag-a.imag;
        return sub;
    }
     complex operator*(complex a)
    {
        complex prod;
        prod.real=real*a.real;
        prod.imag=imag*a.imag;
        return prod;
    }
      complex operator/(complex a)
    {
        complex div;
        div.real=real/a.real;
        div.imag=imag/a.imag;
        return div;
    }
    
};
int main()
{
    complex ob(1,2);
    ob.display();
    cout<<"\n";
    complex ob1(7,8);
    ob1.display();
    cout<<"\n";
    complex ob2(3,2);
    ob2.display();
    cout<<"\n";
    complex ob3;
    ob3=ob+ob1;
    complex ob4;
    ob3=ob2*ob3;
    ob4=ob3/ob;
    ob3.display();
    cout<<"\n";
    ob4.display();
    cout<<"\n";
    return 0; 
}