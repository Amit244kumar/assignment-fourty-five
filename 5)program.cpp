#include<conio.h>
#include<iostream>
#include<set>

using namespace std;

int IsEmpty(multiset<int>&s)
{
    return s.empty();
}
int main()
{
    multiset<int>d;
    multiset<int>::iterator t;
    cout<<"Enter 1 if you want to insert elements otherwise enter 0 : ";
    int f;
    cin>>f;
    if(f){
        cout<<"Enter 5 elements"<<endl;
        for(int i=0;i<5;i++)
        {
            cin>>f;
            d.insert(f);
        }
    }
    if(IsEmpty(d))
    {
        cout<<"The multiset is empty";
    }
    else{
        cout<<"The multiset is not empty";
    }
    getch();
    return 0;

}
