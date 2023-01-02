#include<iostream>
using namespace std;
class shopping_list
{
    int i,j,n;
    int get_item_code[10];
    int get_item_price[10];
    public:
    void get_item(void);
    void display_sum(void);
    void remove(void);
    void display(void);
};
void shopping_list::get_item(void)
{
    cout<<"enter the size of an list array:";
    cin>>n;
    cout<<"\nenter the item code:";
    for(i=0;i<n;i++)
    {
        cin>>get_item_code[i];
    }
    for(i=0;i<n;i++)
    {
        cout<<get_item_code[i];
    }
    cout<<"n\enter the item price:";
    for(i=0;i<n;i++)
    {
        cin>>get_item_price[i];
    }
    for(i=0;i<n;i++)
    {
        cout<<get_item_code[i];
    }
}
void shopping_list::display_sum(void)
{
    int sum=0;
    cout<<"\nthe total price for all the items is:";
    for(i=0;i<n;i++)
    {
        sum=sum+get_item_price[i];
    }  
    cout<<sum;
}
void shopping_list:: remove(void)
{
    int item_code;
    cout<<"\nenter item code:";
    cin>>item_code;
    for(i=0;i<n;i++)
    {
        if(get_item_code[i]==item_code)
        get_item_price[i]=0;
    }
}
void shopping_list::display(void)
{
    for(i=0;i<n;i++)
    {
        cout<<"\n"<<get_item_price[i];
        cout<<"\n"<<get_item_code[i]; 
    }
}
int main()
{
    shopping_list sl;
    int choice;
    while(choice!=5)
    {
        cout<<"1.add an item\n2.display total price of all the items\n3.remove an item\n4.display items along with their prices\n5.exit console!!\n";
        cout<<"enter your choice:";
        cin>>choice;
        switch(choice)
        {
        case 1:sl.get_item();break;
        case 2:sl.display_sum();break;
        case 3:sl.remove();break;
        case 4:sl.display();break;
        default:cout<<"invalid choice!!exit console!!";
        break; 
        }
    }
    return 0;
}