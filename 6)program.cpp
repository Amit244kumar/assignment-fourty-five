#include<conio.h>
#include<iostream>
#include<set>

using namespace std;

void Insert(multiset<int>&s,int n)
{
    int f;
    for(int i=0;i<n;i++)
    {
        cin>>f;
        s.insert(f);
    }
}
int main()
{
    multiset<int>d;
    multiset<int>::iterator t;
    int f;
    cout<<"Enter number to be insert"<<endl;
    cin>>f;
    cout<<"Enter your elements"<<endl;
    Insert(d,f);
    for(multiset<int>::iterator t=d.begin();t!=d.end();t++)
    {
        cout<<*t<<" ";
    }
    getch();
    return 0;

}
