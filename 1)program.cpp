#include<conio.h>
#include<iostream>
#include<set>

using namespace std;
multiset<int>::iterator InputInMltset(multiset<int>&s,int n)
{
    int f;
    for(int i=0;i<n;i++)
    {
        cin>>f;
        s.insert(f);
    }
    return s.begin();
}
int main()
{
    multiset<int>ms;
    multiset<int>::iterator t;
    t=InputInMltset(ms,5);
    cout<<"the set elements "<<*t;
    getch();
    return 0;
}
