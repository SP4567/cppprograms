#include<iostream>
using namespace std;
class geometry
{
    float area;
    public:
    geometry()
    {
        area=0.0;
    }
    ~geometry()
    {

    }
    int AREA(float length,float breadth)
    {
        //area of rectangle.
        area=length*breadth;
        cout<<"\narea of rectangle is:"<<area;
        return 0;
    }
    int AREA()
    {
        int side1,side2; 
        //area of triangle.
        cout<<"\nenter base and height of the triangle:";
        cin>>side1>>side2;
        area=0.5*side1*side2;
        cout<<"\narea of triangle is:"<<area;
        return 0;
    }
    int AREA(float radius)
    {
        //area of circle
        const float pi=3.14;
        area=pi*radius*radius;
        cout<<"\narea of the circle is:"<<area;
        return 0;
    }
};
    int main()
    {
        geometry sumo;
        sumo.AREA(1.0,2.0);
        sumo.AREA();
        sumo.AREA(5.5);
        return 0;
    }