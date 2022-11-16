#include<conio.h>
#include<iostream>
#include<set>

using namespace std;

int Size(multiset<int>&s)
{
    return s.size();
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
    cout<<"in multiset "<<Size(d)<<" elements"<<endl;


    getch();
    return 0;

}
