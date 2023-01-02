#include<iostream>
using namespace std;
class vehicle
{
    public:
    vehicle()
    {
        cout<<"this is a vehicle\n";
    }
};
class car:public vehicle
{
    public:
    car()
    {
        cout<<"this is a car\n";
    }
};
class suv
{
    public:
    suv()
    {
        cout<<"actually this is sports utility vehicle!\n";
    }
};
class NISSAN_MAGNITE:public car,public suv
{
    public:
    NISSAN_MAGNITE()
    {
        cout<<"ohh woww! this suv is NISSAN MAGNITE";
    }
};
int main()
{
    NISSAN_MAGNITE n;
    return 0;
}