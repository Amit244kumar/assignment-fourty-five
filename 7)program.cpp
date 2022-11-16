#include<conio.h>
#include<iostream>
#include<set>

using namespace std;

void RemoveAll(multiset<int>&s)
{
    return s.clear();
}
int main()
{
    multiset<int>d;
    multiset<int>::iterator t;
    int f;
    cout<<"Enter 5 elements"<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>f;
        d.insert(f);
    }
    cout<<"The multiset elements"<<endl;
    for(multiset<int>::iterator t=d.begin();t!=d.end();t++)
    {
        cout<<*t<<" ";
    }
    RemoveAll(d);
    cout<<endl;
    if(d.empty())
    {
        cout<<"The elements are removed";
    }
    getch();
    return 0;

}
