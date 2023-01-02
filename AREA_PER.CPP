#include<iostream>
using namespace std;
//program is based on function overloading:which means creating a function with the same name but all the functions perform different tasks.
class shapes//defining a class
{
double area,perimeter,pi;//taking input for area and perimeter
public:
shapes()//non-parameterised constructor
{
    double area,perimetre;
    area=0.0;
    perimetre=0.0;
}
//two constructor with the same name but different functionality this is called constructor overloading.
shapes(double a,double p)//parametrised constructor
{
    double area,perimetre;
    area=a;
    perimetre=p;
}
~shapes()//destructor which destroys the objject when it goes out of scope.
{
    cout<<"\nobject is destroyed!!!";
}
//functions with the same name but different functionality this is called function overloading.
void area_perimeter(double length,double breadth)//creating function
{
cout<<"enter the length and breadth of rectangle ";
cin>>length>>breadth;
area=length*breadth;//calculating area
cout<<"\narea of rectangle is:"<<area;//printing area
perimeter=2*(length+breadth);
cout<<"\nperimeter of rectangle is:"<<perimeter;
}
void area_perimeter(int side)//overloading area_perimeter
{
cout<<"\nenter the side of the square: ";//taking input from the user
cin>>side;
area=side*side;//calculating the area
cout<<"\narea of square is: "<<area;//printing the area
perimeter=4*side;
cout<<"\nperimeter of square is: "<<perimeter;
}
void area_perimeter(double base,double height,double side2)
{
cout<<"\nenter the base and height of the triangle: ";
cin>>base>>height;
cout<<"\nenter the third side of triangle: ";
cin>>side2;
area=0.5*base*height;
cout<<"\narea of triangle is: "<<area;
perimeter=base*height*side2;
cout<<"\nperimeter of triangle is:"<<perimeter;
}
void area_perimeter(double radius)
{
pi=3.14;
cout<<"\nenter the radius of the circle: ";
cin>>radius;
area=pi*radius*radius;
cout<<"\narea of the circle: "<<area;
perimeter=2*pi*radius;
cout<<"\nperimeter of cirle is: "<<perimeter;
}
};
int main()//creating the main function
{
shapes rectangle,square,triangle,circle;//creating object
//calling the function by following the protocols of function overloading
rectangle.area_perimeter(1.5,2.5);
square.area_perimeter(2);
triangle.area_perimeter(1.5,2.5,3.5);
circle.area_perimeter(2.5);
return 0;
}

