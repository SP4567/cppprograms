#include<iostream>
#include<string.h>
using namespace std;
class media
{
    public:
    string title,publication;
    virtual void read(void)
    {
        cout<<"\nenter the title and publication:";
        cin>>title>>publication;
    }
    virtual void show(void)
    {
        cout<<"title:"<<title<<"\n"<<"publication:"<<publication;
    }
};
class book:public media
{
    public:
    int no_of_pages;
    void read(void)
    {
        cout<<"\nenter number of pages of the book:";
        cin>>no_of_pages;
    }
    void show(void)
    {
        cout<<"\ntotal number of pages are:"<<no_of_pages;
    }
};
class tape:public media
{
    public:
    int hours,minutes,seconds;
    void read(void)
    {
    cout<<"\nenter the playing time of the tape in hours minutes and seconds:";
    cin>>hours>>minutes>>seconds;
    }
    void show(void)
    {
        cout<<"time duration:"<<hours<<":"<<minutes<<":"<<seconds;
    }
}; 
int main()
{
    media *m;
    book b;
    m=&b;
    m->read();
    m->show();
    tape t;
    m=&t;
    m->read();
    m->show();
    return 0;
}
