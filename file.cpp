#include<iostream>
#include<string.h>
using namespace std;
class file
{
    public:
    int handler()
    {
        ofstream outf("stud.txt");
        cout<<"enter name";
        string name;
        cin>>name;
        cout<<"enter roll_number";
        int roll_number;
        cin>>roll_number;
        outf<<name<<roll_number;
        outf.close();
        ifstream inf("stud.txt");
        inf>>name>>roll_number;
        cout<<"\nName"<<name;
        cout<<"\nroll_number"<<roll_number;
        inf.close();
        return 0;
    }
};
int main()
{
    file f;
    f.handler();
    return 0;
}