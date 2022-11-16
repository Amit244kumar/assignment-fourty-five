#include<conio.h>
#include<iostream>
#include<set>

using namespace std;

void EraseElement(multiset<int>&s,int n)
{
    multiset<int>::iterator t=s.begin();
    for(int i=0;i<s.size();i++)
    {
        if(*t==n)
        {
            s.erase(n);
        }
        t++;
    }

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
    for(t=d.begin();t!=d.end();t++)
    {
        cout<<*t<<" ";
    }
    cout<<"Enter element to remove : ";
    cin>>f;
    EraseElement(d,f);
    for(t=d.begin();t!=d.end();t++)
    {
        cout<<*t<<" ";
    }
    getch();
    return 0;
}
